/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDDocument;

@interface WDTableCellProperties : NSObject {

	short mWidth;
	short mPosition;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD109 mOriginalProperties;
	SCD_Struct_WD109 mTrackedProperties;
	WDDocument* mDocument;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(short)arg1 ;
-(short)position;
-(short)topMargin;
-(void)setRightMargin:(short)arg1 ;
-(short)width;
-(void)setWidth:(short)arg1 ;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(short)rightMargin;
-(short)leftMargin;
-(short)bottomMargin;
-(char)isLeftMarginOverridden;
-(char)isRightMarginOverridden;
-(char)isTopMarginOverridden;
-(char)isBottomMarginOverridden;
-(char)isDeletedOverridden;
-(int)deleted;
-(char)isShadingOverridden;
-(id)shading;
-(char)isBottomBorderOverridden;
-(id)bottomBorder;
-(void)setTopMargin:(short)arg1 ;
-(void)setLeftMargin:(short)arg1 ;
-(char)isTopBorderOverridden;
-(char)isLeftBorderOverridden;
-(char)isRightBorderOverridden;
-(id)topBorder;
-(id)leftBorder;
-(id)rightBorder;
-(char)isVerticalAlignmentOverridden;
-(char)isInsideHorizontalBorderOverridden;
-(id)insideHorizontalBorder;
-(char)isInsideVerticalBorderOverridden;
-(id)insideVerticalBorder;
-(char)isWidthTypeOverridden;
-(int)widthType;
-(void)setBottomMargin:(short)arg1 ;
-(void)setTextDirection:(int)arg1 ;
-(void)setDeleted:(int)arg1 ;
-(void)setDeletionDate:(id)arg1 ;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1 ;
-(id)deletionDate;
-(unsigned short)indexToAuthorIDOfDeletion;
-(void)setEditDate:(id)arg1 ;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg1 ;
-(id)editDate;
-(unsigned short)indexToAuthorIDOfEdit;
-(void)setEdited:(int)arg1 ;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(int)resolveMode;
-(void)setFormattingChanged:(int)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setFormattingChangeDate:(id)arg1 ;
-(char)isFormattingChangedOverridden;
-(int)formattingChanged;
-(char)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(char)isFormattingChangeDateOverridden;
-(id)formattingChangeDate;
-(char)isTextDirectionOverridden;
-(int)textDirection;
-(void)clearShading;
-(id)mutableShading;
-(id)mutableDiagonalUpBorder;
-(id)mutableDiagonalDownBorder;
-(void)setWidthType:(int)arg1 ;
-(void)setTopMarginType:(int)arg1 ;
-(void)setBottomMarginType:(int)arg1 ;
-(void)setLeftMarginType:(int)arg1 ;
-(void)setRightMarginType:(int)arg1 ;
-(void)setVerticallyMergedCell:(char)arg1 ;
-(void)setFirstInSetOfVerticallyMergedCells:(char)arg1 ;
-(char)isDiagonalDownBorderOverridden;
-(id)diagonalDownBorder;
-(char)isDiagonalUpBorderOverridden;
-(id)diagonalUpBorder;
-(char)isTopMarginTypeOverridden;
-(int)topMarginType;
-(char)isLeftMarginTypeOverridden;
-(int)leftMarginType;
-(char)isBottomMarginTypeOverridden;
-(int)bottomMarginType;
-(char)isRightMarginTypeOverridden;
-(int)rightMarginType;
-(char)isVerticallyMergedCellOverridden;
-(char)verticallyMergedCell;
-(char)isFirstInSetOfVerticallyMergedCellsOverridden;
-(char)firstInSetOfVerticallyMergedCells;
-(id)mutableInsideHorizontalBorder;
-(id)mutableInsideVerticalBorder;
-(void)addPropertiesValues:(SCD_Struct_WD110*)arg1 to:(SCD_Struct_WD110*)arg2 ;
-(void)addProperties:(id)arg1 ;
-(void)originalToTracked;
-(char)noWrap;
-(void)setNoWrap:(char)arg1 ;
-(char)isNoWrapOverridden;
-(int)edited;
-(char)isEditedOverridden;
-(char)isIndexToAuthorIDOfDeletionOverridden;
-(char)isIndexToAuthorIDOfEditOverridden;
-(char)isDeletionDateOverridden;
-(char)isEditDateOverridden;
@end

