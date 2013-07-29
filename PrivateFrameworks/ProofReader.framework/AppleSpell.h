/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@class NSURL, NSArray, NSString, NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface AppleSpell : NSObject  {
    void *_proofReaderConnection;
    struct __CFDictionary { } *_databaseConnections;
    NSMutableDictionary *_bindicts;
    NSMutableArray *_globalBindictDataArray;
    NSMutableArray *_globalNegBindictDataArray;
    NSMutableDictionary *_autocorrections;
    NSString *_lastLanguage;
    NSArray *_userPreferredLanguages;
    NSArray *_userTopLanguages;
    NSMutableDictionary *_learnedResponses;
    NSMutableArray *_diagnosticInfo;
    NSMutableSet *_foundNames;
    double _lastFindNames;
    NSMutableSet *_foundShortcuts;
    NSMutableDictionary *_lastSampleCollected;
    unsigned int _numberOfSamplesCollected;
    double _lastSampleCollection;
    NSMutableArray *_retainedSamples;
    NSMutableDictionary *_lastSampleRecorded;
    double _lastSampleRecording;
    NSMutableArray *_altBundleURLs;
    NSURL *_updateBundleURL;
    NSMutableDictionary *_languageCounts;
    double _lastLanguageCounts;
    BOOL _userPrefersUncheckedLatinLanguage;
}


- (void)clearCaches;
- (id)bundle;
- (void)addGuessesForKoreanWord:(id)arg1 toMutableArray:(id)arg2 includeAdditionalGuesses:(BOOL)arg3;
- (id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3;
- (id)spellServer:(id)arg1 _retainedFinalModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3;
- (id)spellServer:(id)arg1 _retainedModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3;
- (id)spellServer:(id)arg1 _retainedCorrectionsForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 _retainedPrefixesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 _retainedAlternativesForPinyinInputString:(id)arg2 extended:(BOOL)arg3;
- (id)_retainedAlternativesByCombiningAlternatives:(id)arg1 withAlternatives:(id)arg2 andAddingAlternatives:(id)arg3;
- (id)_recursiveRetainedAlternativesForPinyinInputString:(id)arg1 depth:(unsigned int)arg2;
- (unsigned int)_getSplitIndexes:(unsigned int*)arg1 maxCount:(unsigned int)arg2 forPinyinInputString:(id)arg3;
- (id)_primitiveRetainedAlternativesForPinyinInputString:(id)arg1;
- (id)_pinyinStringByCombiningPinyinString:(id)arg1 withPinyinString:(id)arg2;
- (void)addModifiedPartialPinyinToArray:(id)arg1 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg2 fromIndex:(unsigned int)arg3 prevIndex:(unsigned int)arg4 prevPrevIndex:(unsigned int)arg5 prePrevPrevIndex:(unsigned int)arg6 startingModificationsAt:(unsigned int)arg7 inBuffer:(char *)arg8 length:(unsigned int)arg9 initialSyllableCount:(unsigned int)arg10 initialScore:(unsigned int)arg11 prevScore:(unsigned int)arg12 prevPrevScore:(unsigned int)arg13 lastSyllableScore:(unsigned int)arg14;
- (void)addModifiedPinyinToArray:(id)arg1 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg2 fromIndex:(unsigned int)arg3 prevIndex:(unsigned int)arg4 prevPrevIndex:(unsigned int)arg5 startingModificationsAt:(unsigned int)arg6 inBuffer:(char *)arg7 length:(unsigned int)arg8 initialSyllableCount:(unsigned int)arg9 initialScore:(unsigned int)arg10 prevScore:(unsigned int)arg11 prevPrevScore:(unsigned int)arg12 lastSyllableScore:(unsigned int)arg13 couldBeAbbreviatedPinyin:(BOOL)arg14;
- (void)addSpecialModifiedPinyinToArray:(id)arg1 inBuffer:(char *)arg2 length:(unsigned int)arg3 atEnd:(BOOL)arg4;
- (id)englishStringFromWordBuffer:(char *)arg1 length:(unsigned int)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3;
- (id)englishStringsFromWordBuffer:(char *)arg1 length:(unsigned int)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3;
- (id)spellServer:(id)arg1 finalModificationsForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2;
- (id)_japaneseCorrectionForString:(id)arg1 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg2;
- (id)_correctionForKoreanString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned int)arg5 dictionary:(id)arg6 keyEventData:(id)arg7 alternativeCorrection:(id*)arg8;
- (id)_crudePreviousWordInString:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)looksLikeArticledNoun:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3;
- (BOOL)onNoContractionList:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3 sender:(id)arg4;
- (BOOL)onContractionList:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3 sender:(id)arg4;
- (BOOL)looksLikeAdverb:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3 sender:(id)arg4;
- (id)_crudeNextWordInString:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)looksLikeParticiple:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3 sender:(id)arg4;
- (id)_correctionForSuggestedPhrase:(const char *)arg1 originalBuffer:(const char *)arg2 length:(unsigned int)arg3;
- (id)_detailWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 description:(id)arg2 corrections:(id)arg3;
- (id)_modifiedGrammarDescriptionForDescription:(id)arg1;
- (id)_crudePreviousWordInString:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 precededBy:(id*)arg3;
- (id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 checkString:(id)arg2 offset:(unsigned int)arg3 types:(unsigned long long)arg4 options:(id)arg5 orthography:(id)arg6 wordCount:(int*)arg7;
- (struct _NSRange { unsigned int x1; unsigned int x2; })spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(int*)arg4 countOnly:(BOOL)arg5;
- (BOOL)validateWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkNames:(BOOL)arg8 checkHyphens:(BOOL)arg9 checkIntercaps:(BOOL)arg10 checkOptions:(BOOL)arg11 depth:(unsigned int)arg12;
- (BOOL)validateWordPrefixBuffer:(char *)arg1 length:(unsigned int)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3;
- (BOOL)globalCheckNegativeWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 encoding:(unsigned long)arg4;
- (void)addAlternateDataBundleURL:(id)arg1;
- (void)timeout:(id)arg1;
- (id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 suggestWordWithMinimumLength:(unsigned int)arg2 maximumLength:(unsigned int)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3 inLanguage:(id)arg4;
- (id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3 inLanguage:(id)arg4;
- (id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3 inLanguage:(id)arg4;
- (id)spellServer:(id)arg1 suggestGuessesForWord:(id)arg2 inLanguage:(id)arg3;
- (id)spellServer:(id)arg1 suggestGuessesForKoreanWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 languages:(id)arg4 topLanguages:(id)arg5 orthography:(id)arg6 checkOrthography:(BOOL)arg7 mutableResults:(id)arg8 offset:(unsigned int)arg9 autocorrect:(BOOL)arg10 keyEventData:(id)arg11 appIdentifier:(id)arg12 wordCount:(int*)arg13 countOnly:(BOOL)arg14 correction:(id*)arg15;
- (id)_correctionForString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned int)arg5 dictionary:(id)arg6 language:(id)arg7 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg8 keyEventData:(id)arg9 alternativeCorrection:(id*)arg10 isApostropheInsertion:(BOOL*)arg11;
- (id)autocorrectionDictionaryForLanguage:(id)arg1;
- (id)_orthographyByModifyingOrthography:(id)arg1 withLatinLanguage:(id)arg2;
- (id)bindictDataForLanguage:(id)arg1 index:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })spellServer:(id)arg1 checkGrammarInString:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 language:(id)arg4 orthography:(id)arg5 mutableResults:(id)arg6 offset:(unsigned int)arg7 details:(id*)arg8;
- (BOOL)_checkGrammarInString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 language:(id)arg3 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg4 sender:(id)arg5 bufIO:(struct _PR_BUF_IO { char *x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; struct _PR_LIMITS {} *x8; struct _PR_PARA_INFO {} *x9; struct _PR_ERROR {} *x10; struct _PR_PARSE_INFO {} **x11; unsigned char x12; short x13; BOOL x14; BOOL x15; struct _PR_STATUS { unsigned int x_16_1_1; int x_16_1_2; unsigned short x_16_1_3; } x16; }*)arg6 errorRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg7 details:(id*)arg8;
- (struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)databaseConnectionForLanguage:(id)arg1;
- (BOOL)_checkEnglishGrammarInString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 indexIntoBuffer:(unsigned int)arg3 bufferLength:(unsigned int)arg4 language:(id)arg5 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg6 sender:(id)arg7 bufIO:(struct _PR_BUF_IO { char *x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; struct _PR_LIMITS {} *x8; struct _PR_PARA_INFO {} *x9; struct _PR_ERROR {} *x10; struct _PR_PARSE_INFO {} **x11; unsigned char x12; short x13; BOOL x14; BOOL x15; struct _PR_STATUS { unsigned int x_16_1_1; int x_16_1_2; unsigned short x_16_1_3; } x16; }*)arg8 retval:(int*)arg9 errorRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg10 details:(id*)arg11;
- (BOOL)validateWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkTemp:(BOOL)arg8 checkNames:(BOOL)arg9 checkHyphens:(BOOL)arg10 checkIntercaps:(BOOL)arg11 checkOptions:(BOOL)arg12 depth:(unsigned int)arg13;
- (BOOL)validateWordBuffer:(char *)arg1 length:(unsigned int)arg2 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg3;
- (BOOL)globalCheckWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 encoding:(unsigned long)arg4;
- (BOOL)checkWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 encoding:(unsigned long)arg4 index:(unsigned int)arg5;
- (BOOL)validateAbbreviationOrNumberWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 encoding:(unsigned long)arg4 connection:(struct _PR_DB_IO { unsigned char x1; unsigned char x2; struct _PR_DOC_FORMAT { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; } x3; unsigned short x4; unsigned short x5; unsigned long *x6; unsigned char x7; short x8; short x9; short x10; short x11; unsigned short x12; struct _PR_DBINIT { struct _PR_FILE {} *x_13_1_1[1]; struct _PR_FILE {} *x_13_1_2; struct _PR_FILE {} *x_13_1_3; struct _PR_FILE {} *x_13_1_4; struct _PR_FILE {} *x_13_1_5; } x13; struct _RULEFILE {} *x14[1]; struct _PR_STATUS { unsigned int x_15_1_1; int x_15_1_2; unsigned short x_15_1_3; } x15; }*)arg5 sender:(id)arg6;
- (unsigned long)encodingForLanguage:(id)arg1;
- (id)globalNegativeBindictDataArray;
- (id)globalBindictDataArray;
- (id)bindictDataArrayForLanguage:(id)arg1 index:(unsigned int)arg2;
- (id)fallbackLocalizationForLanguage:(id)arg1;
- (id)localizationForLanguage:(id)arg1;
- (id)localizationsForLanguage:(id)arg1;
- (void)resetTimer;
- (id)init;
- (id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 stringForInputString:(id)arg2 language:(id)arg3;
- (BOOL)spellServer:(id)arg1 canChangeCaseOfFirstLetterInString:(id)arg2 toUpperCase:(BOOL)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestWordWithLengthInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestGuessesForWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inString:(id)arg3 language:(id)arg4;
- (void)setUpdateBundleURL:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(int*)arg4 countOnly:(BOOL)arg5 correction:(id*)arg6;
- (struct _NSRange { unsigned int x1; unsigned int x2; })spellServer:(id)arg1 checkGrammarInString:(id)arg2 language:(id)arg3 details:(id*)arg4;

@end
