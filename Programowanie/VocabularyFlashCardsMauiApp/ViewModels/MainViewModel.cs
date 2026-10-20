using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows.Input;
using VocabularyFlashCardsMauiApp.Models;

namespace VocabularyFlashCardsMauiApp.ViewModels
{
    public class MainViewModel : BindableObject
    {
        private Flashcard _currentCard;
        private bool _isTranslationVisible;
        private int _currentIndex;

        public ObservableCollection<Flashcard> Flashcards { get; set; }

        public Flashcard CurrentCard
        {
            get => _currentCard;
            set
            {
                if (_currentCard != value)
                {
                    _currentCard = value;
                    OnPropertyChanged();
                    // When card changes, hide translation
                    IsTranslationVisible = false;
                    // Also update index if it's not set by the user moving the carousel
                    if (_currentIndex >= 0 && _currentIndex < Flashcards.Count)
                    {
                        // This part is tricky with CarouselView. 
                        // Usually we'll update index from view, not vice-versa to avoid loops.
                    }
                }
            }
        }

        public bool IsTranslationVisible
        {
            get => _isTranslationVisible;
            set
            {
                if (!value.Equals(_isTranslationVisible))
                {
                    _isTranslationVisible = value;
                    OnPropertyChanged();
                }
            }
        }

        public int CurrentIndex
        {
            get => _currentIndex;
            set
            {
                if (_currentIndex != value)
                {
                    _currentIndex = value;
                    OnPropertyChanged();
                    // When user swipes, hide translation
                    IsTranslationVisible = false;
                }
            }
        }

        public ICommand ShowTranslationCommand { get; }
        public ICommand RestartCommand { get; }

        public MainViewModel()
        {
            Flashcards = new ObservableCollection<Flashcard>
            {
                new Flashcard { English = "apple", Polish = "jabłko" },
                new Flashcard { English = "house", Polish = "dom" },
                new Flashcard { English = "dog", Polish = "pies" },
                new Flashcard { English = "book", Polish = "książka" },
                new Flashcard { English = "bike", Polish = "rower" }
            };

            _currentCard = Flashcards[0];
            _currentIndex = 0;

            ShowTranslationCommand = new Command(() => IsTranslationVisible = true);
            RestartCommand = new Command(Restart);
        }

        private void Restart()
        {
            CurrentIndex = 0;
            CurrentCard = Flashcards[0];
            IsTranslationVisible = false;
        }
    }
}
