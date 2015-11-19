/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EBReaderState, EDSheet;

@interface EBReaderSheetState : NSObject {

	EBReaderState* mReaderState;
	EDSheet* mEDSheet;
	map<int, unsigned int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned int> > >* mSharedFormulas;
	unsigned mChartIndex;

}
-(void)dealloc;
-(id)resources;
-(id)workbook;
-(XlBinaryReader*)xlReader;
-(id)edSheet;
-(id)readerState;
-(unsigned)sharedFormulaIndexForRowCol:(int)arg1 ;
-(void)setSharedFormulaIndex:(unsigned)arg1 forRowCol:(int)arg2 ;
-(id)initWithReaderState:(id)arg1 ;
-(void)setEDSheet:(id)arg1 ;
-(unsigned)nextChartIndex;
-(void)reportWorksheetWarning:(TCTaggedMessageStructure*)arg1 ;
@end
