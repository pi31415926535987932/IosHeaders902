/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SearchUI/SearchUITableRowCardSectionView.h>

@interface SearchUITableHeaderCardSectionView : SearchUITableRowCardSectionView {

	char _isCompactTable;
	char _headerIsVibrant;
	int _firstTrailingIndex;

}

@property (assign) int firstTrailingIndex;              //@synthesize firstTrailingIndex=_firstTrailingIndex - In the implementation block
@property (assign) char isCompactTable;                 //@synthesize isCompactTable=_isCompactTable - In the implementation block
@property (assign) char headerIsVibrant;                //@synthesize headerIsVibrant=_headerIsVibrant - In the implementation block
-(int)numberOfColumns;
-(float)fontSize;
-(id)initWithCardSection:(id)arg1 controller:(id)arg2 ;
-(void)setFirstTrailingIndex:(int)arg1 ;
-(void)setIsCompactTable:(char)arg1 ;
-(void)setHeaderIsVibrant:(char)arg1 ;
-(int)firstTrailingIndex;
-(char)isCompactTable;
-(char)headerIsVibrant;
-(void)setupWithTableRowCardSectionViews:(id)arg1 ;
-(float)labelBottomBaselineSpacing;
-(float)labelTopBaselineSpacing;
-(char)labelsAreVibrant;
@end

