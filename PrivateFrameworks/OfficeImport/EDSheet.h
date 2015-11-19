/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedNode.h>

@class EDWorkbook, EDString, EDColorReference, EDHeaderFooter, EDPageSetup, NSMutableArray, OITSUPointerKeyDictionary, EDProcessors, EDWarnings, ESDContainer;

@interface EDSheet : OCDDelayedNode {

	EDWorkbook* mWorkbook;
	EDString* mName;
	BOOL mHidden;
	BOOL mDisplayFormulas;
	BOOL mDisplayGridlines;
	BOOL mIsDialogSheet;
	EDColorReference* mDefaultGridlineColorReference;
	EDHeaderFooter* mHeaderFooter;
	EDPageSetup* mPageSetup;
	NSMutableArray* mDrawables;
	OITSUPointerKeyDictionary* mTextBoxMap;
	OITSUPointerKeyDictionary* mCommentMap;
	EDProcessors* mProcessors;
	EDWarnings* mWarnings;
	ESDContainer* mEscherDrawing;

}

@property (assign,nonatomic) BOOL isDialogSheet; 
+(id)sheetWithWorkbook:(id)arg1 ;
-(unsigned)commentCount;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)workbook;
-(unsigned)drawableCount;
-(id)drawableAtIndex:(unsigned)arg1 ;
-(BOOL)isDisplayGridlines;
-(id)drawables;
-(void)setup;
-(void)teardown;
-(void)addDrawable:(id)arg1 ;
-(id)processors;
-(void)applyProcessors;
-(id)initWithWorkbook:(id)arg1 ;
-(void)setHeaderFooter:(id)arg1 ;
-(id)pageSetup;
-(void)setPageSetup:(id)arg1 ;
-(id)warnings;
-(void)setIsDialogSheet:(BOOL)arg1 ;
-(void)setDisplayFormulas:(BOOL)arg1 ;
-(void)setDisplayGridlines:(BOOL)arg1 ;
-(void)setDefaultGridlineColorReference:(id)arg1 ;
-(id)headerFooter;
-(void)doneWithNonRowContent;
-(id)defaultGridlineColor;
-(void)setDefaultGridlineColor:(id)arg1 ;
-(void)removeDrawableAtIndex:(unsigned)arg1 ;
-(id)edTextBoxForShape:(id)arg1 ;
-(void)setEDTextBox:(id)arg1 forShape:(id)arg2 ;
-(id)edCommentForShape:(id)arg1 ;
-(void)setEDComment:(id)arg1 forShape:(id)arg2 ;
-(BOOL)isDialogSheet;
-(id)escherDrawing;
-(void)setEscherDrawing:(id)arg1 ;
-(id)defaultGridlineColorReference;
-(id)drawableEnumerator;
-(BOOL)isDisplayFormulas;
-(void)reduceMemoryIfPossible;
@end

