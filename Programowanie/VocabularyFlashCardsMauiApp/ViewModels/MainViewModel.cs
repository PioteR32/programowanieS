using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows.Input;
using VocabularyFlashCardsMauiApp.Models;

namespace VocabularyFlashCardsMauiApp.ViewModels
{
    public class MainViewModel : BindableObject
    {
        public ObservableCollection<Flashcard> Flashcards { get; set; }
        private Flashcard _currentCard;
        public Flashcard CurrentCard
        {
            get => _currentCard;
            set
            {
                if (_currentCard != value)
                {
                    _currentCard = value;
                    OnPropertyChanged();
                    IsTranslationVisible = false;
                    
                    if (_currentIndex >= 0 && _currentIndex < Flashcards.Count)
                    {
                        CurrentIndex = Flashcards.IndexOf(_currentCard);
                    }

                }
            }
        }
        private bool _isTranslationVisible;
        public bool IsTranslationVisible
        {
            get => _isTranslationVisible;
            set
            {
                if (value != _isTranslationVisible)
                {
                    _isTranslationVisible = value;
                    OnPropertyChanged();
                }
            }
        }
        private int _currentIndex;
        public int CurrentIndex
        {
            get => _currentIndex;
            set
            {
                if (_currentIndex != value)
                {
                    _currentIndex = value;
                    IsTranslationVisible = false;
                    OnPropertyChanged();                
                }
            }
        }

        public ICommand ShowTranslationCommand { get; }
        public ICommand RestartCommand { get; }

        public MainViewModel()
        {
            Flashcards = new ObservableCollection<Flashcard>
            {
                new Flashcard { EnglishWord = "apple", PolishWord = "jabłko" },
                new Flashcard { EnglishWord = "house", PolishWord = "dom" },
                new Flashcard { EnglishWord = "dog", PolishWord = "pies" },
                new Flashcard { EnglishWord = "book", PolishWord = "książka" },
                new Flashcard { EnglishWord = "bike", PolishWord = "rower" }
            };

            CurrentCard = Flashcards[0];

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
