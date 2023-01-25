#ifndef FLASHCARD_H
#define FLASHCARD_H

#include <iostream>

class flashCard {
private:
	std::string _kanji;
	std::string _hiragana;
	std::string _traduction;

	bool _isVocabulary; // Un mot de vocabulaire à traduire

	int _cours; // Le cours dans lequel on apprend le kanji (1,2,3 so far)

public:

	flashCard(){
		std::cout << "flashCard name is Tireless tracker" << std::endl;
	}

	flashCard(int cours, std::string kanji, std::string hiragana, std::string traduction) 
	 : _cours(cours), _kanji(kanji), _hiragana(hiragana), _traduction(traduction), _isVocabulary(false)
	{
		std::cout << "New flashcard : lvl " << cours << " - " << kanji << " - " << hiragana << " - " << traduction << std::endl;
	}

	std::string getKanji() { return _kanji; };
	std::string getHiragana() { return _hiragana; };
	std::string getTraduction() { return _traduction; };
	bool isVocabulary(){ return _isVocabulary; };
	void setAsVocabularyCard() { _isVocabulary = true; };
	int getCours() { return _cours; }

	void print(){ std::cout << _kanji << " - " << _hiragana << " - " << _traduction << std::endl; };

	bool checkAnswerHiragana(std::string input){ return input == _hiragana; }
	bool checkAnswerKanji(std::string input){ return input == _kanji; }

};



#endif