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
	myFlashCards.push_back(flashCard(2, "一人目"     , "ひとりめ", "première personne"));
	myFlashCards.push_back(flashCard(2, "二人目"     , "ふたりめ", "deuxième personne"));
	myFlashCards.push_back(flashCard(2, "三人目"     , "さんにんめ", "troisième personne"));
	myFlashCards.push_back(flashCard(2, "目てき"     , "もくてき", "but, objectif"));
	myFlashCards.push_back(flashCard(2, "か目"       , "かもく", "matière, discipline"));
	myFlashCards.push_back(flashCard(2, "ちゅう耳えん", "ちゅうじえん", "otite de l'oreille moyenne"));
	myFlashCards.push_back(flashCard(2, "ぶ門"       , "ぶもん", "section, secteur, classe, catégorie"));
	myFlashCards.push_back(flashCard(2, "せん門"     , "せんもん", "spécialité, domaine d'études"));
	myFlashCards.push_back(flashCard(2, "じ間"       , "じかん", "temps"));
	myFlashCards.push_back(flashCard(2, "人間"       , "にんげん", "être humain"));
	myFlashCards.push_back(flashCard(2, "ひる間"     , "ひるま", "le jour, pendant le jour"));
	myFlashCards.push_back(flashCard(2, "問う"       , "とう", "demander, questionner"));
	myFlashCards.push_back(flashCard(2, "問いあわせ"  , "といあわせ", "demande de renseignements"));
	myFlashCards.push_back(flashCard(2, "しつ問"     , "しつもん", "question"));
	myFlashCards.push_back(flashCard(2, "問だい"     , "もんだい", "problème"));
	myFlashCards.push_back(flashCard(2, "しん聞"     , "しんぶん", "journal"));
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

	return myFlashCards;
}

int main(){

	vector<flashCard> myFlashCards;

	std::srand(std::time(0));

	// Construct the kanji list
	string input;
	bool lvl1 = false, lvl2 = false, lvl3 = true;
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
	// printf("Include kanjis from JPN1903? Enter Y/y for yes (ignoring any other entry):\n");
	// cin >> input;
	// if(input == "Y" || input == "y"){
	// 	lvl3 = true;
	// }

	if(lvl2){
		printf("The focus is on the kanjis from JPN1903. Choose the frequency (in percents, integer number in [1,100]) with which they will appear. The rest will be from a mix of previous courses.\n");
		cin >> input;
		while(stoi(input) < 0 || stoi(input) > 100){
			printf("Wrong entry for the ratio of new kanji, please type again\n");
			cin >> input;
		}
		int ratioOfNewKanji = stoi(input);

		vector<flashCard> kanji1902 = createKanjiListJPN1902();
		vector<flashCard> kanji1903 = createKanjiListJPN1903();

		// Create the flashcard vector to have ratioOfNewKanji % of the newest kanjis
		size_t totalKanjis = ceil(kanji1903.size() / (ratioOfNewKanji/100.0) );
		size_t toAdd = ceil(totalKanjis * (1. - ratioOfNewKanji/100.0) );

		printf("Asking %d  percents of kanji from JPN1903 (%ld total) - There should be %ld total kanji - Adding %ld old kanji\n",
			ratioOfNewKanji, kanji1903.size(), totalKanjis, toAdd);

		random_shuffle(begin(kanji1902), end(kanji1902));

		for(auto val : kanji1903)
			myFlashCards.push_back(val);
		for(size_t i = 0; i < toAdd; ++i)
			myFlashCards.push_back(kanji1902[i]);
	} else{

		myFlashCards = createKanjiListJPN1903();

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

			printf("Quel est ce kanji (T pour voir la traduction - STOP pour quitter) : %s - Progression : %3d/%3d - Restants : %ld\n", 
				card.getKanji().data(), corrects++, listSize, myFlashCards.size());
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
			bool result = card.checkAnswerHiragana(input);
			printf("Valeur entrée : %s - Hiragana : %s - Traduction : %s ------> %s\n\n\n",
				input.data(), card.getHiragana().data(), card.getTraduction().data(), (result ? "Success!" : "Mauvaise réponse )-:"));

			if(result){
				// Remove kanji from the list on success
				myFlashCards.erase(myFlashCards.begin() + random);
			}
			askAgain = false;
		}
	}
	
	return 0;
}