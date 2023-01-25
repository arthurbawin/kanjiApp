#include "flashCard.h"

#include <vector>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <random>

using namespace std;

static vector<flashCard> createKanjiListJPN1902()
{
	vector<flashCard> myFlashCards;

	myFlashCards.push_back(flashCard(2, "目 (seul)", "め", "oeil"));
	myFlashCards.push_back(flashCard(2, "耳 (seul)", "みみ", "oreille"));
	myFlashCards.push_back(flashCard(2, "門 (seul)", "もん", "porte, grille"));
	myFlashCards.push_back(flashCard(2, "間 (seul)", "あいだ", "entre"));
	myFlashCards.push_back(flashCard(2, "問い (seul)", "とい", "question"));
	myFlashCards.push_back(flashCard(2, "聞く (seul)", "きく", "demander, écouter"));
	myFlashCards.push_back(flashCard(2, "一人目", "ひとりめ", "première personne"));
	myFlashCards.push_back(flashCard(2, "二人目", "ふたりめ", "deuxième personne"));
	myFlashCards.push_back(flashCard(2, "三人目", "さんにんめ", "troisième personne"));
	myFlashCards.push_back(flashCard(2, "目てき", "もくてき", "but, objectif"));
	myFlashCards.push_back(flashCard(2, "か目", "かもく", "matière, discipline"));
	myFlashCards.push_back(flashCard(2, "ちゅう耳えん", "ちゅうじえん", "otite de l'oreille moyenne"));
	myFlashCards.push_back(flashCard(2, "ぶ門", "ぶもん", "section, secteur, classe, catégorie"));
	myFlashCards.push_back(flashCard(2, "せん門", "せんもん", "spécialité, domaine d'études"));
	myFlashCards.push_back(flashCard(2, "じ間", "じかん", "temps"));
	myFlashCards.push_back(flashCard(2, "人間", "にんげん", "être humain"));
	myFlashCards.push_back(flashCard(2, "ひる間", "ひるま", "le jour, pendant le jour"));
	myFlashCards.push_back(flashCard(2, "問う", "とう", "demander, questionner"));
	myFlashCards.push_back(flashCard(2, "問いあわせ" , "といあわせ", "demande de renseignements"));
	myFlashCards.push_back(flashCard(2, "しつ問", "しつもん", "question"));
	myFlashCards.push_back(flashCard(2, "問だい", "もんだい", "problème"));
	myFlashCards.push_back(flashCard(2, "しん聞", "しんぶん", "journal"));
	myFlashCards.push_back(flashCard(2, "毎 (seul)", "まい", "chaque, tous les"));
	myFlashCards.push_back(flashCard(2, "食べる (seul)", "たべる", "manger"));
	myFlashCards.push_back(flashCard(2, "飲む (seul)", "のむ", "boire"));
	myFlashCards.push_back(flashCard(2, "言う (seul)", "いう", "dire"));
	myFlashCards.push_back(flashCard(2, "話す (seul)", "はなす", "parler"));
	myFlashCards.push_back(flashCard(2, "語る (seul)", "かたる", "raconter"));
	myFlashCards.push_back(flashCard(2, "毎日", "まいにち", "tous les jours"));
	myFlashCards.push_back(flashCard(2, "毎月", "まいつき", "tous les mois"));
	myFlashCards.push_back(flashCard(2, "食べもの", "たべもの", "nourriture"));
	myFlashCards.push_back(flashCard(2, "食じ", "しょくじ", "repas"));
	myFlashCards.push_back(flashCard(2, "飲食", "いんしょく", "boire et manger"));
	myFlashCards.push_back(flashCard(2, "飲みもの", "のみもの", "boisson"));
	myFlashCards.push_back(flashCard(2, "飲りょう", "いんりょう", "boisson"));
	myFlashCards.push_back(flashCard(2, "言ば", "ことば", "mot, parole, langue"));
	myFlashCards.push_back(flashCard(2, "一言", "ひとこと", "petit mot, petit commentaire"));
	myFlashCards.push_back(flashCard(2, "言語", "げんご", "langage, langue"));
	myFlashCards.push_back(flashCard(2, "話", "はなし", "histoire, conte"));
	myFlashCards.push_back(flashCard(2, "でん話", "でんわ", "téléphone"));
	myFlashCards.push_back(flashCard(2, "しゅ話", "しゅわ", "langue des signes"));
	myFlashCards.push_back(flashCard(2, "日本語", "にほんご", "langue japonaise"));
	myFlashCards.push_back(flashCard(2, "もの語", "ものがたり", "récit, histoire, narration"));
	myFlashCards.push_back(flashCard(2, "読む (seul)", "よむ", ""));
	myFlashCards.push_back(flashCard(2, "見る (seul)", "みる", ""));
	myFlashCards.push_back(flashCard(2, "貝 (seul)", "かい", ""));
	myFlashCards.push_back(flashCard(2, "買う (seul)", "かう", ""));
	myFlashCards.push_back(flashCard(2, "体 (seul)", "からだ", ""));
	myFlashCards.push_back(flashCard(2, "大きい (seul)", "おおきい", ""));
	myFlashCards.push_back(flashCard(2, "読しょ", "どくしょ", ""));
	myFlashCards.push_back(flashCard(2, "読てん", "とうてん", ""));
	myFlashCards.push_back(flashCard(2, "見せる", "みせる", ""));
	myFlashCards.push_back(flashCard(2, "見学", "けんがく", ""));
	myFlashCards.push_back(flashCard(2, "い見", "いけん", ""));
	myFlashCards.push_back(flashCard(2, "貝がら", "かいがら", ""));
	myFlashCards.push_back(flashCard(2, "あか貝", "あかがい", ""));
	myFlashCards.push_back(flashCard(2, "ムール貝", "むうるがい", ""));
	myFlashCards.push_back(flashCard(2, "買いもの", "かいもの", ""));
	myFlashCards.push_back(flashCard(2, "体じゅう", "たいじゅう", ""));
	myFlashCards.push_back(flashCard(2, "ばい買", "ばいばい", ""));
	myFlashCards.push_back(flashCard(2, "体いく", "たいいく", ""));
	myFlashCards.push_back(flashCard(2, "大学", "だいがく", ""));
	myFlashCards.push_back(flashCard(2, "大体", "だいたい", ""));
	myFlashCards.push_back(flashCard(2, "小さい (seul)", "ちいさい", ""));
	myFlashCards.push_back(flashCard(2, "上 (seul)", "うえ", ""));
	myFlashCards.push_back(flashCard(2, "中 (seul)", "なか", ""));
	myFlashCards.push_back(flashCard(2, "下 (seul)", "した", ""));
	myFlashCards.push_back(flashCard(2, "右 (seul)", "みぎ", ""));
	myFlashCards.push_back(flashCard(2, "工 (seul)", "こう", ""));
	myFlashCards.push_back(flashCard(2, "小林", "こばやし", ""));
	myFlashCards.push_back(flashCard(2, "小学校", "しょうがっこう", ""));
	myFlashCards.push_back(flashCard(2, "大小", "だいしょう", ""));
	myFlashCards.push_back(flashCard(2, "上ぎ", "うわぎ", ""));
	myFlashCards.push_back(flashCard(2, "上り", "のぼり", ""));
	myFlashCards.push_back(flashCard(2, "上手", "じょうず", ""));
	myFlashCards.push_back(flashCard(2, "中学校", "ちゅうがっこう", ""));
	myFlashCards.push_back(flashCard(2, "中ごく語", "ちゅうごくご", ""));
	myFlashCards.push_back(flashCard(2, "一日中", "いちにちじゅう", ""));
	myFlashCards.push_back(flashCard(2, "下り", "くだり", ""));
	myFlashCards.push_back(flashCard(2, "ち下てつ", "ちかてつ", ""));
	myFlashCards.push_back(flashCard(2, "下手", "へた", ""));
	myFlashCards.push_back(flashCard(2, "右よく", "うよく", ""));
	myFlashCards.push_back(flashCard(2, "右せつ", "うせつ", ""));
	myFlashCards.push_back(flashCard(2, "工じょう", "こうじょう", ""));
	myFlashCards.push_back(flashCard(2, "工ぎょう", "こうぎょう", ""));
	myFlashCards.push_back(flashCard(2, "左 (seul)", "ひだり", ""));
	myFlashCards.push_back(flashCard(2, "明かり (seul)", "あかり", ""));
	myFlashCards.push_back(flashCard(2, "好き (seul)", "すき", ""));
	myFlashCards.push_back(flashCard(2, "時 (seul)", "とき", ""));
	myFlashCards.push_back(flashCard(2, "分 (seul)", "ふん", ""));
	myFlashCards.push_back(flashCard(2, "半ば (seul)", "なかば", ""));
	myFlashCards.push_back(flashCard(2, "左がわ", "ひだりがわ", ""));
	myFlashCards.push_back(flashCard(2, "左よく", "さよく", ""));
	myFlashCards.push_back(flashCard(2, "左せつ", "させつ", ""));
	myFlashCards.push_back(flashCard(2, "明るい", "あかるい", ""));
	myFlashCards.push_back(flashCard(2, "明らか", "あきらか", ""));
	myFlashCards.push_back(flashCard(2, "文明", "ぶんめい", ""));
	myFlashCards.push_back(flashCard(2, "ふ明", "ふめい", ""));
	myFlashCards.push_back(flashCard(2, "好む", "このむ", ""));
	myFlashCards.push_back(flashCard(2, "大好ぶつ", "だいこうぶつ", ""));
	myFlashCards.push_back(flashCard(2, "分ける", "わける", ""));
	myFlashCards.push_back(flashCard(2, "分かる", "わかる", ""));
	myFlashCards.push_back(flashCard(2, "半月", "はんつき", ""));
	myFlashCards.push_back(flashCard(2, "何分", "なんぷん", ""));
	myFlashCards.push_back(flashCard(2, "半分", "はんぶん", ""));
	myFlashCards.push_back(flashCard(2, "時間", "じかん", ""));
	myFlashCards.push_back(flashCard(2, "時けい", "とけい", ""));
	myFlashCards.push_back(flashCard(2, "林 (seul)", "はやし", ""));
	myFlashCards.push_back(flashCard(2, "糸 (seul)", "いと", ""));
	myFlashCards.push_back(flashCard(2, "線 (seul)", "せん", ""));
	myFlashCards.push_back(flashCard(2, "地 (seul)", "ち", ""));
	myFlashCards.push_back(flashCard(2, "鉄 (seul)", "てつ", ""));
	myFlashCards.push_back(flashCard(2, "机 (seul)", "つくえ", ""));
	myFlashCards.push_back(flashCard(2, "しん林", "しんりん", ""));
	myFlashCards.push_back(flashCard(2, "け糸", "けいと", ""));
	myFlashCards.push_back(flashCard(2, "せい糸", "せいし", ""));
	myFlashCards.push_back(flashCard(2, "てん線", "てんせん", ""));
	myFlashCards.push_back(flashCard(2, "三ばん線", "さんばんせん", ""));
	myFlashCards.push_back(flashCard(2, "地へい線", "ちへいせん", ""));
	myFlashCards.push_back(flashCard(2, "土地", "とち", ""));
	myFlashCards.push_back(flashCard(2, "地しん", "じしん", ""));
	myFlashCards.push_back(flashCard(2, "地下鉄", "ちかてつ", ""));
	myFlashCards.push_back(flashCard(2, "鉄きん", "てっきん", ""));
	myFlashCards.push_back(flashCard(2, "鉄せい", "てっせい", ""));
	myFlashCards.push_back(flashCard(2, "べんきょう机", "べんきょうつくえ", ""));
	myFlashCards.push_back(flashCard(2, "机上", "きじょう", ""));
	myFlashCards.push_back(flashCard(2, "地ず", "ちず", ""));
	myFlashCards.push_back(flashCard(2, "教える (seul)", "おしえる", ""));
	myFlashCards.push_back(flashCard(2, "友 (seul)", "とも", ""));
	myFlashCards.push_back(flashCard(2, "父 (seul)", "ちち", ""));
	myFlashCards.push_back(flashCard(2, "母 (seul)", "はは", ""));
	myFlashCards.push_back(flashCard(2, "兄 (seul)", "あに", ""));
	myFlashCards.push_back(flashCard(2, "弟 (seul)", "おとうと", ""));
	myFlashCards.push_back(flashCard(2, "教しつ", "きょうしつ", ""));
	myFlashCards.push_back(flashCard(2, "しゅう教", "しゅうきょう", ""));
	myFlashCards.push_back(flashCard(2, "教会", "きょうかい", ""));
	myFlashCards.push_back(flashCard(2, "友だち", "ともだち", ""));
	myFlashCards.push_back(flashCard(2, "友人", "ゆうじん", ""));
	myFlashCards.push_back(flashCard(2, "友じょう", "ゆうじょう", ""));
	myFlashCards.push_back(flashCard(2, "しん友", "しんゆう", ""));
	myFlashCards.push_back(flashCard(2, "お父さん", "おとうさん", ""));
	myFlashCards.push_back(flashCard(2, "お母さん", "おかあさん", ""));
	myFlashCards.push_back(flashCard(2, "しん父", "しんぷ", ""));
	myFlashCards.push_back(flashCard(2, "母こく", "ぼこく", ""));
	myFlashCards.push_back(flashCard(2, "母こく語", "ぼこくご", ""));
	myFlashCards.push_back(flashCard(2, "お兄さん", "おにいさん", ""));
	myFlashCards.push_back(flashCard(2, "弟さん", "おとうとさん", ""));
	myFlashCards.push_back(flashCard(2, "兄弟", "きょうだい", ""));
	myFlashCards.push_back(flashCard(2, "姉 (seul)", "あね", ""));
	myFlashCards.push_back(flashCard(2, "妹 (seul)", "いもうと", ""));
	myFlashCards.push_back(flashCard(2, "文 (seul)", "ぶん", ""));
	myFlashCards.push_back(flashCard(2, "方 (seul)", "ほう", ""));
	myFlashCards.push_back(flashCard(2, "回す (seul)", "まわす", ""));
	myFlashCards.push_back(flashCard(2, "会う (seul)", "あう", ""));
	myFlashCards.push_back(flashCard(2, "お姉さん", "おねえさん", ""));
	myFlashCards.push_back(flashCard(2, "妹さん", "いもうとさん", ""));
	myFlashCards.push_back(flashCard(2, "姉妹", "しまい", ""));
	myFlashCards.push_back(flashCard(2, "文", "ふみ", ""));
	myFlashCards.push_back(flashCard(2, "文ぽう", "ぶんぽう", ""));
	myFlashCards.push_back(flashCard(2, "文しょう", "ぶんしょう", ""));
	myFlashCards.push_back(flashCard(2, "れい文", "れいぶん", ""));
	myFlashCards.push_back(flashCard(2, "文じ", "もじ", ""));
	myFlashCards.push_back(flashCard(2, "方", "かた", ""));
	myFlashCards.push_back(flashCard(2, "ゆう方", "ゆうがた", ""));
	myFlashCards.push_back(flashCard(2, "一回", "いっかい", ""));
	myFlashCards.push_back(flashCard(2, "今回", "こんかい", ""));
	myFlashCards.push_back(flashCard(2, "会話", "かいわ", ""));
	myFlashCards.push_back(flashCard(2, "大会", "たいかい", ""));
	myFlashCards.push_back(flashCard(2, "教会", "きょうかい", ""));
	myFlashCards.push_back(flashCard(2, "何 (seul)", "なに", ""));
	myFlashCards.push_back(flashCard(2, "社 (seul)", "しゃ", ""));
	myFlashCards.push_back(flashCard(2, "新しい (seul)", "あたらしい", ""));
	myFlashCards.push_back(flashCard(2, "力 (seul)", "ちから", ""));
	myFlashCards.push_back(flashCard(2, "男 (seul)", "おとこ", ""));
	myFlashCards.push_back(flashCard(2, "竹 (seul)", "たけ", ""));
	myFlashCards.push_back(flashCard(2, "何", "なん", ""));
	myFlashCards.push_back(flashCard(2, "何時間", "なんじかん", ""));
	myFlashCards.push_back(flashCard(2, "き何学", "きかがく", ""));
	myFlashCards.push_back(flashCard(2, "社", "やしろ", ""));
	myFlashCards.push_back(flashCard(2, "会社", "かいしゃ", ""));
	myFlashCards.push_back(flashCard(2, "じん社", "じんじゃ", ""));
	myFlashCards.push_back(flashCard(2, "新た", "あらた", ""));
	myFlashCards.push_back(flashCard(2, "新聞", "しんぶん", ""));
	myFlashCards.push_back(flashCard(2, "新年", "しんねん", ""));
	myFlashCards.push_back(flashCard(2, "体力", "たいりょく", ""));
	myFlashCards.push_back(flashCard(2, "男女", "だんじょ", ""));
	myFlashCards.push_back(flashCard(2, "男せい", "だんせい", ""));
	myFlashCards.push_back(flashCard(2, "ちょう男", "ちょうなん", ""));
	myFlashCards.push_back(flashCard(2, "竹やぶ", "たけやぶ", ""));
	myFlashCards.push_back(flashCard(2, "竹林", "ちくりん", ""));
	myFlashCards.push_back(flashCard(2, "答える (seul)", "こたえる", ""));
	myFlashCards.push_back(flashCard(2, "学ぶ (seul)", "まなぶ", ""));
	myFlashCards.push_back(flashCard(2, "校 (seul)", "こう", ""));
	myFlashCards.push_back(flashCard(2, "雨 (seul)", "あめ", ""));
	myFlashCards.push_back(flashCard(2, "雲 (seul)", "くも", ""));
	myFlashCards.push_back(flashCard(2, "雪 (seul)", "ゆき", ""));
	myFlashCards.push_back(flashCard(2, "答え", "こたえ", ""));
	myFlashCards.push_back(flashCard(2, "かい答", "かいとう", ""));
	myFlashCards.push_back(flashCard(2, "かい答ようし", "かいとうようし", ""));
	myFlashCards.push_back(flashCard(2, "文学", "ぶんがく", ""));
	myFlashCards.push_back(flashCard(2, "すう学", "すうがく", ""));
	myFlashCards.push_back(flashCard(2, "学校", "がっこう", ""));
	myFlashCards.push_back(flashCard(2, "校てい", "こうてい", ""));
	myFlashCards.push_back(flashCard(2, "雨てん", "うてん", ""));
	myFlashCards.push_back(flashCard(2, "らい雨", "らいう", ""));
	myFlashCards.push_back(flashCard(2, "雨がさ", "あまがさ", ""));
	myFlashCards.push_back(flashCard(2, "雨雲", "あまぐも", ""));
	myFlashCards.push_back(flashCard(2, "雲かい", "うんかい", ""));
	myFlashCards.push_back(flashCard(2, "雪かき", "ゆきかき", ""));
	myFlashCards.push_back(flashCard(2, "新雪", "しんせつ", ""));
	myFlashCards.push_back(flashCard(2, "じょ雪", "じょせつ", ""));

	return myFlashCards;
}

static vector<flashCard> createKanjiListJPN1903()
{
	vector<flashCard> myFlashCards;

	myFlashCards.push_back(flashCard(3, "電 (seul)", "でん", "électricité"));
	myFlashCards.push_back(flashCard(3, "天 (seul)", "てん", "ciel, firmament"));
	myFlashCards.push_back(flashCard(3, "気 (seul)", "き", "esprit, énergie vitale"));
	myFlashCards.push_back(flashCard(3, "安い (seul)", "やすい", "c'est bon marché"));
	myFlashCards.push_back(flashCard(3, "家 (seul)", "いえ", "maison"));
	myFlashCards.push_back(flashCard(3, "室 (seul)", "しつ", "pièce, chambre"));
	myFlashCards.push_back(flashCard(3, "電話", "でんわ", "téléphone"));
	myFlashCards.push_back(flashCard(3, "電しゃ", "でんしゃ", "train"));
	myFlashCards.push_back(flashCard(3, "てい電", "ていでん", "panne d'électricité"));
	myFlashCards.push_back(flashCard(3, "天の川", "あまのがわ", "la voie lactée"));
	myFlashCards.push_back(flashCard(3, "天体", "てんたい", "astre, corps céleste"));
	myFlashCards.push_back(flashCard(3, "雨天", "うてん", "temps pluvieux"));
	myFlashCards.push_back(flashCard(3, "天気", "てんき", "température, temps"));
	myFlashCards.push_back(flashCard(3, "電気", "でんき", "électricité"));
	myFlashCards.push_back(flashCard(3, "本気", "ほんき", "sérieux, sérieusement"));
	myFlashCards.push_back(flashCard(3, "気もち", "きもち", "sentiment, état d'âme"));
	myFlashCards.push_back(flashCard(3, "安しん", "あんしん", "tranquilité d'esprit"));
	myFlashCards.push_back(flashCard(3, "安てい", "あんてい", "stabilité"));
	myFlashCards.push_back(flashCard(3, "家ぞく", "かぞく", "famille"));
	myFlashCards.push_back(flashCard(3, "一けん家", "いっけんや", "maison individuelle"));
	myFlashCards.push_back(flashCard(3, "教室", "きょうしつ", "salle de classe"));
	myFlashCards.push_back(flashCard(3, "わ室", "わしつ", "pièce japonaise"));
	myFlashCards.push_back(flashCard(3, "海　(seul)", "うみ", "mer"));
	myFlashCards.push_back(flashCard(3, "春　(seul)", "はる", "printemps"));
	myFlashCards.push_back(flashCard(3, "夏　(seul)", "なつ", "été"));
	myFlashCards.push_back(flashCard(3, "秋　(seul)", "あき", "automne"));
	myFlashCards.push_back(flashCard(3, "冬　(seul)", "ふゆ", "hiver"));
	myFlashCards.push_back(flashCard(3, "花　(seul)", "はな", "fleur"));
	myFlashCards.push_back(flashCard(3, "海水", "かいすい", "eau de mer"));
	myFlashCards.push_back(flashCard(3, "こう水", "こうずい", "inondation"));
	myFlashCards.push_back(flashCard(3, "日本海", "にほんかい", "Mer du Japon"));
	myFlashCards.push_back(flashCard(3, "ほっ海どう", "ほっかいどう", "Hokkaidô"));
	myFlashCards.push_back(flashCard(3, "春かぜ", "はるかぜ", "brise printanière"));
	myFlashCards.push_back(flashCard(3, "せい春", "せいしゅん", "jeunesse"));
	myFlashCards.push_back(flashCard(3, "夏休み", "なつやすみ", "vacances d'été"));
	myFlashCards.push_back(flashCard(3, "夏き五りん", "かきごりん", "Jeux Olympiques d'été"));
	myFlashCards.push_back(flashCard(3, "秋かぜ", "あきかぜ", "vent d'automne"));
	myFlashCards.push_back(flashCard(3, "千秋らく", "せんしゅうらく", "dernière représentation"));
	myFlashCards.push_back(flashCard(3, "冬休み", "ふゆやすみ", "vacances d'hiver"));
	myFlashCards.push_back(flashCard(3, "冬き五りん", "とうきごりん", "Jeux Olympiques d'hiver"));
	myFlashCards.push_back(flashCard(3, "生け花", "いけばな", "arrangement floral"));
	myFlashCards.push_back(flashCard(3, "花火", "はなび", "feu d'artifice"));
	myFlashCards.push_back(flashCard(3, "花びん", "かびん", "vase (pour fleurs)"));
	myFlashCards.push_back(flashCard(3, "店 (seul)", "みせ", "magasin, boutique"));
	myFlashCards.push_back(flashCard(3, "足 (seul)", "あし", "pied, jambe"));
	myFlashCards.push_back(flashCard(3, "出る (seul)", "でる", "sortir"));
	myFlashCards.push_back(flashCard(3, "入る (seul)", "はいる", "entrer"));
	myFlashCards.push_back(flashCard(3, "週 (seul)", "しゅう", "semaine"));
	myFlashCards.push_back(flashCard(3, "道 (seul)", "みち", "route, voie, chemin"));
	myFlashCards.push_back(flashCard(3, "店先", "みせさき", "devanture d'une boutique"));
	myFlashCards.push_back(flashCard(3, "店いん", "てんいん", "employé d'une boutique"));
	myFlashCards.push_back(flashCard(3, "きっさ店", "きっさてん", "café, salon de thé"));
	myFlashCards.push_back(flashCard(3, "足りる", "たりる", "suffire, être suffisant"));
	myFlashCards.push_back(flashCard(3, "一足", "いっそく", "une paire (de chaussures)"));
	myFlashCards.push_back(flashCard(3, "三足", "さんぞく", "trois paires (de chaussures)"));
	myFlashCards.push_back(flashCard(3, "出口", "でぐち", "sortie"));
	myFlashCards.push_back(flashCard(3, "がい出", "がいしゅつ", "sortie (sortir de chez soi pour aller au resturant, etc.)"));
	myFlashCards.push_back(flashCard(3, "入り口", "いりぐち", "entrée"));
	myFlashCards.push_back(flashCard(3, "出入り口", "でいりぐち", "entrée et sortie"));
	myFlashCards.push_back(flashCard(3, "入れる", "いれる", "mettre dans, verser"));
	myFlashCards.push_back(flashCard(3, "入こく", "にゅうこく", "entrée dans un pays"));
	myFlashCards.push_back(flashCard(3, "来週", "らいしゅう", "semaine prochaine"));
	myFlashCards.push_back(flashCard(3, "週まつ", "しゅうまつ", "fin de semaine, week-end"));
	myFlashCards.push_back(flashCard(3, "しゃ道", "しゃどう", "chaussée"));
	myFlashCards.push_back(flashCard(3, "しん道", "しんとう", "shintô, shintoïsme"));
	myFlashCards.push_back(flashCard(3, "馬 (seul)", "うま", "cheval"));
	myFlashCards.push_back(flashCard(3, "駅 (seul)", "えき", "gare, station"));
	myFlashCards.push_back(flashCard(3, "車 (seul)", "くるま", "véhicule, voiture"));
	myFlashCards.push_back(flashCard(3, "国 (seul)", "くに", "pays"));
	myFlashCards.push_back(flashCard(3, "紙 (seul)", "かみ", "papier"));
	myFlashCards.push_back(flashCard(3, "病 (seul)", "やまい", "maladie"));
	myFlashCards.push_back(flashCard(3, "馬力", "ばりき", "cheval-vapeur"));
	myFlashCards.push_back(flashCard(3, "木馬", "もくば", "cheval de bois"));
	myFlashCards.push_back(flashCard(3, "東京駅", "とうきょうえき", "gare de Tokyo"));
	myFlashCards.push_back(flashCard(3, "駅でん", "えきでん", "ekiden"));
	myFlashCards.push_back(flashCard(3, "じどう車", "じどうしゃ", "automobile"));
	myFlashCards.push_back(flashCard(3, "じてん車", "じてんしゃ", "bicyclette"));
	myFlashCards.push_back(flashCard(3, "国りつ", "こくりつ", "national"));
	myFlashCards.push_back(flashCard(3, "中国", "ちゅうごく", "Chine"));
	myFlashCards.push_back(flashCard(3, "国家", "こっか", "état, nation"));
	myFlashCards.push_back(flashCard(3, "国会", "こっかい", "la Diète"));
	myFlashCards.push_back(flashCard(3, "新聞紙", "しんぶんし", "papier journal"));
	myFlashCards.push_back(flashCard(3, "かい答よう紙", "かいとうようし", "feuille réponse"));
	myFlashCards.push_back(flashCard(3, "手紙", "てがみ", "lettre"));
	myFlashCards.push_back(flashCard(3, "おり紙", "おりがみ", "origami, papier origami"));
	myFlashCards.push_back(flashCard(3, "病気", "びょうき", "maladie, malade"));
	myFlashCards.push_back(flashCard(3, "病いん", "びょういん", "hôpital"));

	myFlashCards.push_back(flashCard(3, "点 (seul)", "てん", "point, note"));
	myFlashCards.push_back(flashCard(3, "州 (seul)", "しゅう", "province, état, région"));
	myFlashCards.push_back(flashCard(3, "少ない (seul)", "すくない", "peu nombreux, peu"));
	myFlashCards.push_back(flashCard(3, "東 (seul)", "ひがし", "l'est"));
	myFlashCards.push_back(flashCard(3, "西 (seul)", "にし", "l'ouest"));
	myFlashCards.push_back(flashCard(3, "南 (seul)", "みなみ", "le sud, le midi"));
	myFlashCards.push_back(flashCard(3, "点ける", "つける", "allumer"));
	myFlashCards.push_back(flashCard(3, "点線", "てんせん", "ligne pointillée"));
	myFlashCards.push_back(flashCard(3, "点火", "てんか", "allumage"));
	myFlashCards.push_back(flashCard(3, "メイン州", "メインしゅう", "État du Maine"));
	myFlashCards.push_back(flashCard(3, "おう州", "おうしゅう", "Europe"));
	myFlashCards.push_back(flashCard(3, "少し", "すこし", "un peu"));
	myFlashCards.push_back(flashCard(3, "少年", "しょうねん", "jeune garçon"));
	myFlashCards.push_back(flashCard(3, "少女", "しょうじょ", "jeune fille"));
	myFlashCards.push_back(flashCard(3, "東京", "とうきょう", "Tokyo"));
	myFlashCards.push_back(flashCard(3, "百点", "ひゃくてん", "100 points, note parfaite"));
	myFlashCards.push_back(flashCard(3, "東西線", "とうざいせん", "ligne Tozai (train)"));
	myFlashCards.push_back(flashCard(3, "東南", "とうなん", "sud-est"));
	myFlashCards.push_back(flashCard(3, "西南", "せいなん", "sud-ouest"));
	myFlashCards.push_back(flashCard(3, "東よう", "とうよう", "l'Orient"));
	myFlashCards.push_back(flashCard(3, "西よう", "せいよう", "l'Occident"));

	myFlashCards.push_back(flashCard(3, "北 (seul)", "きた", "le nord"));
	myFlashCards.push_back(flashCard(3, "手 (seul)", "て", "main"));
	myFlashCards.push_back(flashCard(3, "持つ (seul)", "もつ", "prendre, avoir"));
	myFlashCards.push_back(flashCard(3, "作る (seul)", "つくる", "fabriquer"));
	myFlashCards.push_back(flashCard(3, "魚 (seul)", "さかな", "poisson"));
	myFlashCards.push_back(flashCard(3, "計る (seul)", "はかる", "mesurer"));
	myFlashCards.push_back(flashCard(3, "北国", "きたぐに", "pays nordique"));
	myFlashCards.push_back(flashCard(3, "東北", "とうほく", "Tôhoku (région)"));
	myFlashCards.push_back(flashCard(3, "南北", "なんぼく", "nord-sud"));
	myFlashCards.push_back(flashCard(3, "せん手", "せんしゅ", "athlète, sportif"));
	myFlashCards.push_back(flashCard(3, "か手", "かしゅ", "chanteur(se)"));
	myFlashCards.push_back(flashCard(3, "上手", "じょうず", "habile"));
	myFlashCards.push_back(flashCard(3, "下手", "へた", "malhabile, maladroit"));
	myFlashCards.push_back(flashCard(3, "持っている", "もっている", "posséder, avoir en main"));
	myFlashCards.push_back(flashCard(3, "持さんする", "じさんする", "apporter"));
	myFlashCards.push_back(flashCard(3, "手づくり", "てづくり", "fait à la main"));
	myFlashCards.push_back(flashCard(3, "作文", "さくぶん", "composition"));
	myFlashCards.push_back(flashCard(3, "魚や", "さかなや", "poissonnerie (poissonnier)"));
	myFlashCards.push_back(flashCard(3, "金魚", "きんぎょ", "poisson rouge"));
	myFlashCards.push_back(flashCard(3, "時計", "とけい", "montre"));
	myFlashCards.push_back(flashCard(3, "計かく", "けいかく", "plan, projet"));
	myFlashCards.push_back(flashCard(3, "計さん", "けいさん", "calcul"));

	myFlashCards.push_back(flashCard(3, "書く　(seul)", "かく", "écrire"));
	myFlashCards.push_back(flashCard(3, "名　(seul)", "な", "nom, prénom"));
	myFlashCards.push_back(flashCard(3, "前　(seul)", "まえ", "devant, avant"));
	myFlashCards.push_back(flashCard(3, "後ろ　(seul)", "うしろ", "derrière"));
	myFlashCards.push_back(flashCard(3, "午　(seul)", "ご", "(heure du) cheval (11h à 13h)"));
	myFlashCards.push_back(flashCard(3, "受ける　(seul)", "うける", "recevoir, accepter, subir"));
	myFlashCards.push_back(flashCard(3, "教か書", "きょうかしょ", "manuel"));
	myFlashCards.push_back(flashCard(3, "名し", "めいし", "carte d'affaires"));
	myFlashCards.push_back(flashCard(3, "ゆう名", "ゆうめい", "célèbre"));
	myFlashCards.push_back(flashCard(3, "名じ", "みょうじ", "nom de famille"));
	myFlashCards.push_back(flashCard(3, "名前", "なまえ", "nom"));
	myFlashCards.push_back(flashCard(3, "前後", "ぜんご", "environ"));
	myFlashCards.push_back(flashCard(3, "後　(seul, pour le temps)", "あと", "après, plus tard"));
	myFlashCards.push_back(flashCard(3, "後はい", "こうはい", "cadet"));
	myFlashCards.push_back(flashCard(3, "午後", "ごご", "après-midi"));
	myFlashCards.push_back(flashCard(3, "午前", "ごぜん", "avant-midi"));
	myFlashCards.push_back(flashCard(3, "しょう午", "しょうご", "midi"));
	myFlashCards.push_back(flashCard(3, "受かる", "うかる", "être reçu (à un examen)"));
	myFlashCards.push_back(flashCard(3, "受けんする", "じゅけんする", "subir un examen"));

	myFlashCards.push_back(flashCard(3, "付ける(seul)", "つける", "attacher, coller"));
	myFlashCards.push_back(flashCard(3, "帰る　(seul)", "かえる", "revenir"));
	myFlashCards.push_back(flashCard(3, "朝　(seul)", "あさ", "le matin"));
	myFlashCards.push_back(flashCard(3, "昼　(seul)", "ひる", "le jour"));
	myFlashCards.push_back(flashCard(3, "晩　(seul)", "ばん", "le soir, tard, fin"));
	myFlashCards.push_back(flashCard(3, "元　(seul)", "もと", "origine, base, début"));
	myFlashCards.push_back(flashCard(3, "受付", "うけつけ", "réception (entreprise)"));
	myFlashCards.push_back(flashCard(3, "気を付ける", "きをつける", "faire attention"));
	myFlashCards.push_back(flashCard(3, "気が付く", "きがつく", "se rendre compte"));
	myFlashCards.push_back(flashCard(3, "気付く", "きづく", "se rendre compte"));
	myFlashCards.push_back(flashCard(3, "てん付する", "てんぷする", "joindre, annexer"));
	myFlashCards.push_back(flashCard(3, "帰国", "きこく", "retour au pays"));
	myFlashCards.push_back(flashCard(3, "朝日", "あさひ", "soleil du matin"));
	myFlashCards.push_back(flashCard(3, "朝食", "ちょうしょく", "petit déjeûner"));
	myFlashCards.push_back(flashCard(3, "昼間", "ひるま", "jour, pendant le jour"));
	myFlashCards.push_back(flashCard(3, "昼食", "ちゅうしょく", "repas du midi"));
	myFlashCards.push_back(flashCard(3, "今晩", "こんばん", "ce soir"));
	myFlashCards.push_back(flashCard(3, "毎晩", "まいばん", "tous les soirs"));
	myFlashCards.push_back(flashCard(3, "晩冬", "ばんとう", "fin de l'hiver"));
	myFlashCards.push_back(flashCard(3, "元気", "げんき", "vigueur, être en forme"));
	myFlashCards.push_back(flashCard(3, "地元", "じもと", "local, régional, (gens) de la place"));

	myFlashCards.push_back(flashCard(3, "箱 (seul)", "はこ", "boîte, coffre"));
	myFlashCards.push_back(flashCard(3, "屋 (seul)", "や", "boutique, marchand"));
	myFlashCards.push_back(flashCard(3, "立つ (seul)", "たつ", "se lever debout"));
	myFlashCards.push_back(flashCard(3, "音　(seul)", "おと", "son, bruit"));
	myFlashCards.push_back(flashCard(3, "暗い　(seul)", "くらい", "sombre"));
	myFlashCards.push_back(flashCard(3, "白い　(seul)", "しろい", "c'est blanc"));
	myFlashCards.push_back(flashCard(3, "部屋", "へや", "pièce, chambre, salle"));
	myFlashCards.push_back(flashCard(3, "ゴミ箱", "ごみばこ", "corbeille, poubelle"));
	myFlashCards.push_back(flashCard(3, "箱入り", "はこいり", "mise(e) en boîte"));
	myFlashCards.push_back(flashCard(3, "本屋", "ほんや", "librairie, libraire"));
	myFlashCards.push_back(flashCard(3, "屋ね", "やね", "toit"));
	myFlashCards.push_back(flashCard(3, "家屋", "かおく", "maison, bâtiment"));
	myFlashCards.push_back(flashCard(3, "立てる", "たてる", "dresser, mettre debout"));
	myFlashCards.push_back(flashCard(3, "国立", "こくりつ", "national"));
	myFlashCards.push_back(flashCard(3, "き立する", "きりつする", "se mettre debout"));
	myFlashCards.push_back(flashCard(3, "足音", "あしおと", "bruits de pas"));
	myFlashCards.push_back(flashCard(3, "音読み", "おんよみ", "lecture onyomi"));
	myFlashCards.push_back(flashCard(3, "はつ音", "はつおん", "prononciation"));
	myFlashCards.push_back(flashCard(3, "暗記", "あんき", "apprentissage par coeur"));
	myFlashCards.push_back(flashCard(3, "暗記する", "あんきする", "apprendre par coeur"));
	myFlashCards.push_back(flashCard(3, "丸暗記", "まるあんき", "apprentissage par coeur, mécanique"));
	myFlashCards.push_back(flashCard(3, "白人", "はくじん", "Blancs (gens)"));
	myFlashCards.push_back(flashCard(3, "白紙", "はくし", "page blanche, feuille vierge"));

	myFlashCards.push_back(flashCard(3, "黒い　(seul)", "くろい", "c'est noir"));
	myFlashCards.push_back(flashCard(3, "赤い　(seul)", "あかい", "c'est rouge"));
	myFlashCards.push_back(flashCard(3, "青い　(seul)", "あおい", "c'est bleu/vert"));
	myFlashCards.push_back(flashCard(3, "長い　(seul)", "ながい", "c'est long"));
	myFlashCards.push_back(flashCard(3, "多い　(seul)", "おおい", "nombreux"));
	myFlashCards.push_back(flashCard(3, "古い　(seul)", "ふるい", "c'est vieux/ancien"));
	myFlashCards.push_back(flashCard(3, "白黒", "しろくろ", "noir et blanc"));
	myFlashCards.push_back(flashCard(3, "黒ばん", "こくばん", "tableau (d'école)"));
	myFlashCards.push_back(flashCard(3, "黒人", "こくじん", "Noirs (gens)"));
	myFlashCards.push_back(flashCard(3, "赤ちゃん", "あかちゃん", "bébé"));
	myFlashCards.push_back(flashCard(3, "赤十字", "せきじゅうじ", "La Croix Rouge"));
	myFlashCards.push_back(flashCard(3, "青白い", "あおじろい", "blême, pâle"));
	myFlashCards.push_back(flashCard(3, "青しんごう", "あおしんごう", "feu vert (circulation)"));
	myFlashCards.push_back(flashCard(3, "赤しんごう", "あかしんごう", "feu rouge (circulation)"));
	myFlashCards.push_back(flashCard(3, "青少年", "せいしょうねん", "jeunes, jeunesse"));
	myFlashCards.push_back(flashCard(3, "長話", "ながばなし", "bavardage sans fin"));
	myFlashCards.push_back(flashCard(3, "長しょ", "ちょうしょ", "qualité, mérite"));
	myFlashCards.push_back(flashCard(3, "多少", "たしょう", "beaucoup ou peu, plus ou moins"));
	myFlashCards.push_back(flashCard(3, "多分", "たぶん", "peut-être, probablement"));
	myFlashCards.push_back(flashCard(3, "中古", "ちゅうこ", "d'occasion, de seconde main"));
	myFlashCards.push_back(flashCard(3, "ふるほん", "", "livre d'occasion, vieux livre"));

	// Il en manque:

	// No 169-180:
	myFlashCards.push_back(flashCard(3, "台 (seul)", "だい", "socle, base"));
	myFlashCards.push_back(flashCard(3, "枚 (seul)", "まい", "feuille, page"));
	myFlashCards.push_back(flashCard(3, "早い (seul)", "はやい", "tôt, précoce, vite"));
	myFlashCards.push_back(flashCard(3, "遠い (seul)", "とおい", "loin"));
	myFlashCards.push_back(flashCard(3, "近い (seul)", "ちかい", "près"));
	myFlashCards.push_back(flashCard(3, "心 (seul)", "こころ", "coeur, esprit"));
	myFlashCards.push_back(flashCard(3, "台所", "だいどころ", "cuisine (maison)"));
	myFlashCards.push_back(flashCard(3, "台風", "たいふう", "typhon"));
	myFlashCards.push_back(flashCard(3, "二枚目", "にまいめ", "beau garçon"));
	myFlashCards.push_back(flashCard(3, "三枚目", "さんまいめ", "rôle comique (théâtre)"));
	myFlashCards.push_back(flashCard(3, "早おき（する）", "はやおき", "matinal, lève-tôt"));
	myFlashCards.push_back(flashCard(3, "早朝", "そうちょう", "de bon matin, tôt le matin"));
	myFlashCards.push_back(flashCard(3, "遠足", "えんそく", "pique-nique, excursion"));
	myFlashCards.push_back(flashCard(3, "遠りょ（する）", "えんりょ", "retenue, réserve, discrétion"));
	myFlashCards.push_back(flashCard(3, "遠ざかる", "とおざかる", "s'éloigner"));
	myFlashCards.push_back(flashCard(3, "近年", "きんねん", "depuis quelques années"));
	myFlashCards.push_back(flashCard(3, "近じょ", "きんじょ", "voisinage"));
	myFlashCards.push_back(flashCard(3, "さい近", "さいきん", "récemment"));
	myFlashCards.push_back(flashCard(3, "近付く", "ちかづく", "se rapprocher"));
	myFlashCards.push_back(flashCard(3, "安心（する）", "あんしん", "tranquilité d'esprit"));
	myFlashCards.push_back(flashCard(3, "中心", "ちゅうしん", "centre, milieur, coeur"));

	myFlashCards.push_back(flashCard(3, "思う (seul)", "おもう", "penser"));
	myFlashCards.push_back(flashCard(3, "町　(seul)", "まち", "ville, quartier"));
	myFlashCards.push_back(flashCard(3, "楽しい　(seul)", "たのしい", "plaisant, agréable"));
	myFlashCards.push_back(flashCard(3, "牛　(seul)", "うし", "vache, boeuf"));
	myFlashCards.push_back(flashCard(3, "物　(seul)", "もの", "chose, objet"));
	myFlashCards.push_back(flashCard(3, "送る　(seul)", "おくる", "envoyer, accompagner"));
	myFlashCards.push_back(flashCard(3, "思い出", "おもいで", "souvenir"));
	myFlashCards.push_back(flashCard(3, "思い出す", "おもいだす", "se remémorer, se rappeler"));
	myFlashCards.push_back(flashCard(3, "思そう", "しそう", "pensée, philosophie"));
	myFlashCards.push_back(flashCard(3, "楽", "らく", "confortable, agréable"));
	myFlashCards.push_back(flashCard(3, "音楽", "おんがく", "musique"));
	myFlashCards.push_back(flashCard(3, "下町", "したまち", "quartier populaire"));
	myFlashCards.push_back(flashCard(3, " 町立", "ちょうりつ", "communal, fondé par le quartier"));
	myFlashCards.push_back(flashCard(3, "子牛", "こうし", "veau"));
	myFlashCards.push_back(flashCard(3, "牛にゅう", "ぎゅうにゅう", "lait"));
	myFlashCards.push_back(flashCard(3, "牛肉", "ぎゅうにく", "viande de boeuf"));
	myFlashCards.push_back(flashCard(3, "見物", "けんぶつ", "visite (touristique)"));
	myFlashCards.push_back(flashCard(3, "物か", "ぶっか", "coût de la vie"));
	myFlashCards.push_back(flashCard(3, "人物", "じんぶつ", "personnage (cinéma), personne"));
	myFlashCards.push_back(flashCard(3, "送金", "そうきん", "envoi d'argent"));
	myFlashCards.push_back(flashCard(3, "送信", "そうしん", "envoi d'un message"));

	return myFlashCards;
}

static vector<flashCard> createKanjiListJPN1904()
{
	vector<flashCard> myFlashCards;

	myFlashCards.push_back(flashCard(3, "部 (seul)", "ぶ", "section, partie, portion"));
	myFlashCards.push_back(flashCard(3, "走る (seul)", "はしる", "courir, rouler (voitures)"));
	myFlashCards.push_back(flashCard(3, "起きる (seul)", "おきる", "se lever, lever, réveiller, produire, causer, se produire"));
	myFlashCards.push_back(flashCard(3, "鳥 (seul)", "とり", "oiseau"));
	myFlashCards.push_back(flashCard(3, "遊ぶ (seul)", "あそぶ", "se divertir, s'amuser, inactif, innocupé, jouer"));
	myFlashCards.push_back(flashCard(3, "待つ (seul)", "まつ", "attendre, espérer"));
	myFlashCards.push_back(flashCard(3, "部門", "ぶもん", "section, secteur, classe, catégorie"));
	myFlashCards.push_back(flashCard(3, "学部", "がくぶ", "faculté (université"));
	myFlashCards.push_back(flashCard(3, "走しゃ", "そうしゃ", "coureur"));
	myFlashCards.push_back(flashCard(3, "かん走", "かんそう", "compléter une course"));
	myFlashCards.push_back(flashCard(3, "起立", "きりつ", "se lever, se mettre debout"));
	myFlashCards.push_back(flashCard(3, "起しょう", "きしょう", "se lever, sortir du lit"));
	myFlashCards.push_back(flashCard(3, "起こす", "おこす", "réveiller qqun, causer, produire"));
	myFlashCards.push_back(flashCard(3, "部屋", "へや", "pièce, chambre, salle"));
	myFlashCards.push_back(flashCard(3, "小鳥", "ことり", "petit oiseau, oiselet"));
	myFlashCards.push_back(flashCard(3, "やき鳥", "やきとり", "yakitori (brochette de poulet)"));
	myFlashCards.push_back(flashCard(3, "白鳥", "はくちょう", "cygne"));
	myFlashCards.push_back(flashCard(3, "遊び", "あそび", "jeu, amusement, passe-temps"));
	myFlashCards.push_back(flashCard(3, "遊えん地", "ゆうえんち", "parc d'attraction"));
	myFlashCards.push_back(flashCard(3, "待あい室", "まちあいしつ", "salle d'attente"));
	myFlashCards.push_back(flashCard(3, "しょう待", "しょうたい", "invitation"));

	myFlashCards.push_back(flashCard(3, "急ぐ (seul)", "いそぐ", "se presser"));
	myFlashCards.push_back(flashCard(3, "呼ぶ (seul)", "よぶ", "appeler"));
	myFlashCards.push_back(flashCard(3, "住んでいる (seul)", "すんでいる", "habiter, vivre"));
	myFlashCards.push_back(flashCard(3, "所 (seul)", "ところ", "endroit"));
	myFlashCards.push_back(flashCard(3, "市 (seul)", "し", "cité"));
	myFlashCards.push_back(flashCard(3, "取る (seul)", "とる", "prendre, passer"));
	myFlashCards.push_back(flashCard(3, "急かす", "せかす", "presser, presser quelqu'un"));
	myFlashCards.push_back(flashCard(3, "急行", "きゅうこう", "(train) express"));
	myFlashCards.push_back(flashCard(3, "急に", "きゅうに", "brusquement, soudain"));
	myFlashCards.push_back(flashCard(3, "呼び出し", "よびだし", "convocation, appel"));
	myFlashCards.push_back(flashCard(3, "呼きゅう", "こきゅう", "respiration"));
	myFlashCards.push_back(flashCard(3, "住たく地", "じゅうたくち", "zone résidentielle"));
	myFlashCards.push_back(flashCard(3, "えい住", "えいじゅう", "résidence permanente"));
	myFlashCards.push_back(flashCard(3, "台所", "だいどころ", "cuisine (maison)"));
	myFlashCards.push_back(flashCard(3, "住所", "じゅうしょ", "adresse"));
	myFlashCards.push_back(flashCard(3, "場所", "ばしょ", "endroit, lieu"));
	myFlashCards.push_back(flashCard(3, "市場", "いちば", "marché (légumes, etc.)"));
	myFlashCards.push_back(flashCard(3, "市立", "しりつ", "municipal"));
	myFlashCards.push_back(flashCard(3, "鳥取市", "とっとりし", "Ville de Tottori"));
	myFlashCards.push_back(flashCard(3, "取ざい", "しゅざい", "cueillette de renseignements"));
	myFlashCards.push_back(flashCard(3, "取って", "とって", "poignée"));

	return myFlashCards;
}

static vector<flashCard> createVocabularyListJPN1903()
{
	vector<flashCard> myFlashCards;

	// L14
	myFlashCards.push_back(flashCard(3, "急ぐ", "いそぐ", "se presser"));
	myFlashCards.push_back(flashCard(3, "座る", "すわる", "s'asseoir"));
	myFlashCards.push_back(flashCard(3, "立つ", "たつ", "se mettre debout, se lever"));
	myFlashCards.push_back(flashCard(3, "降る", "ふる", "tomber (pluie, neige)"));
	myFlashCards.push_back(flashCard(3, "入る", "はいる", "entrer (dans)"));
	myFlashCards.push_back(flashCard(3, "出る", "でる", "sortir (de)"));
	myFlashCards.push_back(flashCard(3, "曲がる", "まがる", "tourner"));
	myFlashCards.push_back(flashCard(3, "開ける", "あける", "ouvrir"));
	myFlashCards.push_back(flashCard(3, "教える", "おしえる", "enseigner, montrer, donner (information)"));
	myFlashCards.push_back(flashCard(3, "消す", "けす", "éteindre, fermer, arrêter, effacer"));
	myFlashCards.push_back(flashCard(3, "閉める", "しめる", "fermer"));
	myFlashCards.push_back(flashCard(3, "使う", "つかる", "utiliser, employer"));
	myFlashCards.push_back(flashCard(3, "点ける", "つける", "allumer, mettre en marche"));
	myFlashCards.push_back(flashCard(3, "手伝う", "てつだう", "aider"));
	myFlashCards.push_back(flashCard(3, "止める", "とめる", "arrêter, stationner"));
	myFlashCards.push_back(flashCard(3, "取る", "とる", "prendre"));
	myFlashCards.push_back(flashCard(3, "話す", "はなす", "parler"));
	myFlashCards.push_back(flashCard(3, "待つ", "まつ", "attendre"));
	myFlashCards.push_back(flashCard(3, "見せる", "みせる", "montrer, faire voir"));
	myFlashCards.push_back(flashCard(3, "持つ", "もつ", "porter, tenir"));
	myFlashCards.push_back(flashCard(3, "呼ぶ", "よぶ", "appeler"));
	myFlashCards.push_back(flashCard(3, "急ぐ", "いそぐ", "accélérer (le travail)"));
	myFlashCards.push_back(flashCard(3, "", "コピー", "copie, photocopie"));
	myFlashCards.push_back(flashCard(3, "", "コピーする", "photocopier"));
	myFlashCards.push_back(flashCard(3, "雨", "あめ", "pluie"));
	myFlashCards.push_back(flashCard(3, "雪", "ゆき", "neige"));
	myFlashCards.push_back(flashCard(3, "雨が降る", "あめがふる", "pleuvoir"));
	myFlashCards.push_back(flashCard(3, "雪が降る", "ゆきがふる", "neiger"));
	myFlashCards.push_back(flashCard(3, "電気", "でんき", "électricité, lumière"));
	myFlashCards.push_back(flashCard(3, "", "エアコン", "air conditionné, climatisation"));
	myFlashCards.push_back(flashCard(3, "", "パスポート", "passeport "));
	myFlashCards.push_back(flashCard(3, "名前", "なまえ", "nom"));
	myFlashCards.push_back(flashCard(3, "住所", "じゅうしょ", "adresse"));
	myFlashCards.push_back(flashCard(3, "地図", "ちず", "plan, carte"));
	myFlashCards.push_back(flashCard(3, "塩", "しお", "sel"));
	myFlashCards.push_back(flashCard(3, "砂糖", "さとう", "sucre"));
	myFlashCards.push_back(flashCard(3, "問題", "もんだい", "problème, question"));
	myFlashCards.push_back(flashCard(3, "答え", "こたえ", "réponse"));
	myFlashCards.push_back(flashCard(3, "方", "かた", "manière de, façon de  (BC1 + かた)"));
	myFlashCards.push_back(flashCard(3, "読み方", "よみかた", "façon de lire, lecture"));
	myFlashCards.push_back(flashCard(3, "信号", "しんごう", "feu de circulation"));
	myFlashCards.push_back(flashCard(3, "お釣り", "おつり", "monnaie"));
	myFlashCards.push_back(flashCard(3, "音読み", "おんよみ", "lecture sino-japonaise"));
	myFlashCards.push_back(flashCard(3, "日記", "にっき", "journal personnel"));
	myFlashCards.push_back(flashCard(3, "母国語", "ぼこくご", "langue maternelle"));
	myFlashCards.push_back(flashCard(3, "", "ゆっくり", "lentement, doucement"));
	myFlashCards.push_back(flashCard(3, "又", "また", "encore, de nouveau"));
	myFlashCards.push_back(flashCard(3, "", "もう", "encore, de plus, déjà"));
	myFlashCards.push_back(flashCard(3, "もう少し", "もうすこし", "un peu plus"));
	myFlashCards.push_back(flashCard(3, "", "すぐ", "tout de suite"));
	myFlashCards.push_back(flashCard(3, "後で", "あとで", "plus tard, après"));
	myFlashCards.push_back(flashCard(3, "", "まっすぐ", "tout droit"));
	myFlashCards.push_back(flashCard(3, "一日中", "いちにちじゅう", "toute la journée"));

	// L15
	myFlashCards.push_back(flashCard(3, "置く", "おく", "mettre, placer, poser"));
	myFlashCards.push_back(flashCard(3, "作る", "つくる", "fabriquer, faire (gâteaux, etc.)"));
	myFlashCards.push_back(flashCard(3, "売る", "うる", "vendre"));
	myFlashCards.push_back(flashCard(3, "知る", "しる", "apprendre, savoir"));
	myFlashCards.push_back(flashCard(3, "住む", "すむ", "habiter, vivre quelque part"));
	myFlashCards.push_back(flashCard(3, "知っている", "しっている", "savoir, connaître (-ている)"));
	myFlashCards.push_back(flashCard(3, "住んでいる", "すんでいる", "habiter, résider à (-でいる)"));
	myFlashCards.push_back(flashCard(3, "立っている", "たっている", "être debout (-ている)"));
	myFlashCards.push_back(flashCard(3, "研究", "けんきゅう", "recherche, étude"));
	myFlashCards.push_back(flashCard(3, "研究する", "けんきゅうする", "faire des recherches, étudier"));
	myFlashCards.push_back(flashCard(3, "思い出す", "おもいだす", "se rappeler, se souvenir de"));
	myFlashCards.push_back(flashCard(3, "資料", "しりょう", "documents, matériaux"));
	myFlashCards.push_back(flashCard(3, "", "カタログ", "catalogue"));
	myFlashCards.push_back(flashCard(3, "時刻表", "じこくひょう", "horaire (train, bus, etc.)"));
	myFlashCards.push_back(flashCard(3, "服", "ふく", "vêtements"));
	myFlashCards.push_back(flashCard(3, "製品", "せいひん", "produits"));
	myFlashCards.push_back(flashCard(3, "", "ソフト", "logiciel"));
	myFlashCards.push_back(flashCard(3, "電子辞書", "でんしじしょ", "dictionnaire électronique"));
	myFlashCards.push_back(flashCard(3, "歯医者", "はいしゃ", "dentiste"));
	myFlashCards.push_back(flashCard(3, "経済", "けいざい", "économie"));
	myFlashCards.push_back(flashCard(3, "市役所", "しやくしょ", "mairie, hôtel de ville"));
	myFlashCards.push_back(flashCard(3, "高校", "こうこう", "lycée (court pour 高等学校　ー　こうとうがっこう)"));
	myFlashCards.push_back(flashCard(3, "独身", "どくしん", "célibataire"));
	myFlashCards.push_back(flashCard(3, "小学生", "しょうがくせい", "élève d'une école primaire"));
	myFlashCards.push_back(flashCard(3, "皆さん", "みなさん", "vous, eux, vous tous, tout le monde, etc."));
	myFlashCards.push_back(flashCard(3, "", "いらっしゃいます", "être, se trouver quelque part (respecteux pour いる)"));
	myFlashCards.push_back(flashCard(3, "体にいい", "からだにいい", "bon pour la santé"));
	myFlashCards.push_back(flashCard(3, "体に悪い", "からだにわるい", "mauvais pour la santé"));

	// L16
	myFlashCards.push_back(flashCard(3, "押す", "おす", "appuyer sur, presser, pousser"));
	myFlashCards.push_back(flashCard(3, "下ろす", "おろす", "retirer (de l'argent à la banque)"));
	myFlashCards.push_back(flashCard(3, "出す", "だす", "sortir de, retirer, poster (une lettre)"));
	myFlashCards.push_back(flashCard(3, "飲む", "のむ", "boire, prendre de l'alcool"));
	myFlashCards.push_back(flashCard(3, "乗る", "のる", "monter (dans un véhicule)"));
	myFlashCards.push_back(flashCard(3, "浴びる", "あびる", "s'asperger, jeter de l'eau sur soi"));
	myFlashCards.push_back(flashCard(3, "入れる", "いれる", "mettre dans, insérer, introduire"));
	myFlashCards.push_back(flashCard(3, "降りる", "おりる", "descendre (d'un véhicule)"));
	myFlashCards.push_back(flashCard(3, "出る", "でる", "sortir (d'un endroit)"));
	myFlashCards.push_back(flashCard(3, "乗り換える", "のりかえる", "changer (de moyen de transport)"));
	myFlashCards.push_back(flashCard(3, "始める", "はじめる", "commencer"));
	myFlashCards.push_back(flashCard(3, "電話する", "でんわする", "téléphoner"));
	myFlashCards.push_back(flashCard(3, "入学", "にゅうがく", "entrée à l'école"));
	myFlashCards.push_back(flashCard(3, "入学する", "にゅうがくする", "entrer à l'école"));
	myFlashCards.push_back(flashCard(3, "卒業", "そつぎょう", "fin d'études"));
	myFlashCards.push_back(flashCard(3, "卒業する", "そつぎょうする", "terminer ses études"));
	myFlashCards.push_back(flashCard(3, "見学", "けんがく", "visite (dans un but d'études)"));
	myFlashCards.push_back(flashCard(3, "見学する", "けんがくする", "visiter (dans un but d'études)"));
	myFlashCards.push_back(flashCard(3, "", "ジョギング", "jogging"));
	myFlashCards.push_back(flashCard(3, "", "ジョギングする", "faire du jogging"));
	myFlashCards.push_back(flashCard(3, "", "シャワー", "douche"));
	myFlashCards.push_back(flashCard(3, "シャワーを浴びる", "シャワーをあびる", "se doucher"));
	myFlashCards.push_back(flashCard(3, "体", "からだ", "corps"));
	myFlashCards.push_back(flashCard(3, "頭", "あたま", "tête"));
	myFlashCards.push_back(flashCard(3, "髪", "かみ", "cheveux"));
	myFlashCards.push_back(flashCard(3, "顔", "かお", "visage, figure"));
	myFlashCards.push_back(flashCard(3, "目", "め", "oeil, yeux"));
	myFlashCards.push_back(flashCard(3, "耳", "みみ", "oreille"));
	myFlashCards.push_back(flashCard(3, "口", "くち", "bouche"));
	myFlashCards.push_back(flashCard(3, "歯", "は", "dent"));
	myFlashCards.push_back(flashCard(3, "お腹", "おなか", "ventre"));
	myFlashCards.push_back(flashCard(3, "鼻", "はな", "nez"));
	myFlashCards.push_back(flashCard(3, "足（脚）", "あし", "pied (jambe)"));
	myFlashCards.push_back(flashCard(3, "背が高い", "せがたかい", "grand (être grand en taille)"));
	myFlashCards.push_back(flashCard(3, "頭がいい", "あたまがいい", "être intelligent"));
	myFlashCards.push_back(flashCard(3, "若い", "わかい", "jeune"));
	myFlashCards.push_back(flashCard(3, "長い", "ながい", "long"));
	myFlashCards.push_back(flashCard(3, "短い", "みじかい", "court"));
	myFlashCards.push_back(flashCard(3, "明るい", "あかるい", "clair, lumineux"));
	myFlashCards.push_back(flashCard(3, "暗い", "くらい", "sombre"));
	myFlashCards.push_back(flashCard(3, "出口", "でぐち", "sortie"));
	myFlashCards.push_back(flashCard(3, "目的", "もくてき", "but, objectif"));
	myFlashCards.push_back(flashCard(3, "お寺", "おてら", "temple bouddhique"));
	myFlashCards.push_back(flashCard(3, "神社", "じんじゃ", "temple shintô, sanctuaire shintô"));
	myFlashCards.push_back(flashCard(3, "緑", "みどり", "vert, verdure"));
	myFlashCards.push_back(flashCard(3, "ラーメン屋", "ラーメンや", "restaurant de ramen"));
	myFlashCards.push_back(flashCard(3, "番", "ばん", "numéro - (suffixe pour compter)"));
	myFlashCards.push_back(flashCard(3, "", "どうやって", "comment (s'y prend-on pour ...) ?"));
	myFlashCards.push_back(flashCard(3, "", "まず", "d'abord, pour commencer"));
	myFlashCards.push_back(flashCard(3, "次に", "つぎに", "ensuite, après, puis"));
	myFlashCards.push_back(flashCard(3, "", "キャッシュカード", "carte de guichet, cash card"));
	myFlashCards.push_back(flashCard(3, "暗証番号", "あんしょうばんごう", "numéro de code secret"));
	myFlashCards.push_back(flashCard(3, "金額", "きんがく", "montant, somme d'argent"));
	myFlashCards.push_back(flashCard(3, "", "ボタン", "bouton"));
	myFlashCards.push_back(flashCard(3, "確認", "かくにん", "confirmation"));
	myFlashCards.push_back(flashCard(3, "確認する", "かくにんする", "confirmer, vérifier"));

	// L17
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));
	// myFlashCards.push_back(flashCard(3, "", "", ""));

	for(auto &card : myFlashCards)
		card.setAsVocabularyCard();

	return myFlashCards;
}


int main(){

	vector<flashCard> myFlashCards;

	std::srand(std::time(0));

	// Construct the kanji list
	string input;
	bool lvl1 = false, lvl2 = false, lvl3 = false, lvl4 = true;
	bool mixVocabularyAndKanji = false;

	printf("Include kanjis from JPN1901? Enter Y/y for yes (ignoring any other entry):\n");
	cin >> input;
	if(input == "Y" || input == "y"){
		lvl1 = true;
	}

	printf("Include kanjis from JPN1902? Enter Y/y for yes (ignoring any other entry):\n");
	cin >> input;
	if(input == "Y" || input == "y"){
		lvl2 = true;
	}

	printf("Include kanjis from JPN1903? Enter Y/y for yes (ignoring any other entry):\n");
	cin >> input;
	if(input == "Y" || input == "y"){
		lvl3 = true;
	}

	printf("Include vocabulary from JPN1903? Enter Y/y for yes (ignoring any other entry):\n");
	cin >> input;
	if(input == "Y" || input == "y"){
		mixVocabularyAndKanji = true;
	}

	if(lvl1 || lvl2 || lvl3){
		printf("The focus is on the kanjis from JPN1904. Choose the frequency (in percents, integer in [1,100]) with which they will appear. The rest will be from a mix of previous courses.\n");
		cin >> input;
		while(stoi(input) < 0 || stoi(input) > 100){
			printf("Wrong entry for the ratio of new kanji, please type again\n");
			cin >> input;
		}
		int ratioOfNewKanji = stoi(input);

		vector<flashCard> kanji1902 = createKanjiListJPN1902();
		vector<flashCard> kanji1903 = createKanjiListJPN1903();
		vector<flashCard> kanji1904 = createKanjiListJPN1904();

		// Create the flashcard vector to have ratioOfNewKanji % of the newest kanjis
		size_t totalKanjis = ceil(kanji1904.size() / (ratioOfNewKanji/100.0) );
		size_t toAdd = ceil(totalKanjis * (1. - ratioOfNewKanji/100.0) );

		printf("Asking %d  percents of kanji from JPN1904 (%ld total) - There should be %ld total kanji - Adding %ld old kanji\n",
			ratioOfNewKanji, kanji1904.size(), totalKanjis, toAdd);

		vector<flashCard> kanjiToAdd(0);

		if(lvl2){
			for(auto card : kanji1902)
				kanjiToAdd.push_back(card);
		}

		if(lvl3){
			for(auto card : kanji1903)
				kanjiToAdd.push_back(card);
		}

		random_shuffle(begin(kanjiToAdd), end(kanjiToAdd));

		for(auto val : kanji1904)
			myFlashCards.push_back(val);

		for(size_t i = 0; i < toAdd; ++i)
			myFlashCards.push_back(kanjiToAdd[i]);

	} else{

		myFlashCards = createKanjiListJPN1904();

	}

	if(mixVocabularyAndKanji){
		vector<flashCard> voc = createVocabularyListJPN1903();
		for(auto card : voc){
			myFlashCards.push_back(card);
		}
	}

	// Start the thingy
	int corrects = 0;
	int listSize = myFlashCards.size();
	bool askAgain = false;
	flashCard card;
	int random;

	while(true){

		if(myFlashCards.empty()){
			printf("Bravo!\n");
			break;
		}

		if(!askAgain){
			// Select a random kanji
			random = rand() % myFlashCards.size();
			card = myFlashCards[random];

			if(card.isVocabulary()){
				printf("Comment traduit-on ce mot ? (Kanji ou hiragana - STOP pour quitter) : %s - Progression : %3d/%3d - Restants : %ld\n", 
				card.getTraduction().data(), corrects, listSize, myFlashCards.size());
			} else{
				printf("Quel est ce kanji ? (T pour voir la traduction - STOP pour quitter) : %s - Progression : %3d/%3d - Restants : %ld\n", 
				card.getKanji().data(), corrects, listSize, myFlashCards.size());
			}
		}

		cin >> input;

		if(input == "STOP"){
			cout << "Exiting" << endl;
			break;
		} else if(input == "T"){

			// Show translation and ask again
			printf("%s\n", card.getTraduction().data());
			askAgain = true;

		}	else{
			bool result;
			if(card.isVocabulary()){
				// Accept both kanji and hiragana/katakana for vocabulary card
				result = card.checkAnswerKanji(input) || card.checkAnswerHiragana(input);
			} else{
				// Accept only hiragana for kanji card
				result = card.checkAnswerHiragana(input);
			}
			
			printf("Valeur entrée : %s - Hiragana : %s - Traduction : %s ------> %s\n\n\n",
				input.data(), card.getHiragana().data(), card.getTraduction().data(), (result ? "Success!" : "Mauvaise réponse )-:"));

			if(result){
				// Remove kanji from the list on success
				myFlashCards.erase(myFlashCards.begin() + random);
				corrects++;
			}
			askAgain = false;
		}
	}
	
	return 0;
}