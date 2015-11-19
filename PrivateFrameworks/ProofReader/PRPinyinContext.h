/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/PRAutocorrectionContext.h>

@class NSMutableArray;

@interface PRPinyinContext : PRAutocorrectionContext {

	NSMutableArray* _modifications;
	NSMutableArray* _addedModifications;
	NSMutableArray* _removedModifications;
	NSMutableArray* _addedRemovedModifications;
	NSMutableArray* _prefixes;
	NSMutableArray* _guesses;
	NSMutableArray* _completions;
	char* _buffer;
	char* _altBuffer;
	char* _altBufferScores;
	NSMutableArray* _geometryDataArray;
	unsigned* _syllableLengthArray;
	void* _connection;
	unsigned _length;
	unsigned _lengthBeforeApostrophes;
	unsigned _startingPoint;
	unsigned _lastIndexes[4];
	unsigned _nextIndexes[2];
	unsigned _startIndex;
	unsigned _endIndex;
	unsigned _abbreviatedSyllableCount;
	unsigned _previouslyAnalyzedLength;
	double _validSequenceCorrectionThreshold;
	char _lastSyllableIsPartial;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reset;
-(void)_removeModificationsAndMoveStartingPoint;
-(void)_advanceIndexes;
-(void)_addTranspositions;
-(void)_addReplacements;
-(void)_addDeletions;
-(void)_filterModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(void)_addInsertions;
-(void)removeNumberOfInputCharacters:(unsigned)arg1 ;
-(id)currentModifications;
-(id)addedModifications;
-(id)removedModifications;
-(id)prefixes;
-(id)guesses;
-(void)setValidSequenceCorrectionThreshold:(double)arg1 ;
-(double)validSequenceCorrectionThreshold;
-(char)_addEnglishWordForRange:(NSRange)arg1 quickly:(char)arg2 ;
-(char)_addEnglishWordsEndingAtIndex:(unsigned)arg1 quickly:(char)arg2 ;
-(void)_addSpecialEnglishWords;
-(void)_addEnglishWordsQuickly:(char)arg1 ;
-(void)_addValidSequenceReplacements;
-(void)_removePrefixes;
-(void)_addPrefixes;
-(id)completions;
@end
