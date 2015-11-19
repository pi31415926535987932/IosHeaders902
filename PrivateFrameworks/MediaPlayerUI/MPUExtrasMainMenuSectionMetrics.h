/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPUExtrasMainMenuSectionMetricsDataSource;
#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
@class UIFontDescriptor;

@interface MPUExtrasMainMenuSectionMetrics : NSObject {

	float _fittingWidth;
	char _needsUpdate;
	int _itemCount;
	CGSize* _calculatedSizes;
	id<MPUExtrasMainMenuSectionMetricsDataSource> _dataSource;
	UIFontDescriptor* _desiredFontDescriptor;
	UIFontDescriptor* _minimumFontDescriptor;
	float _desiredCellSpacing;
	float _minimumCellSpacing;
	float _desiredWidth;
	UIFontDescriptor* _fittingFontDescriptor;
	float _fittingCellSpacing;
	CGSize _totalFittingSize;

}

@property (assign,nonatomic,__weak) id<MPUExtrasMainMenuSectionMetricsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIFontDescriptor * desiredFontDescriptor;                                     //@synthesize desiredFontDescriptor=_desiredFontDescriptor - In the implementation block
@property (nonatomic,retain) UIFontDescriptor * minimumFontDescriptor;                                     //@synthesize minimumFontDescriptor=_minimumFontDescriptor - In the implementation block
@property (assign,nonatomic) float desiredCellSpacing;                                                     //@synthesize desiredCellSpacing=_desiredCellSpacing - In the implementation block
@property (assign,nonatomic) float minimumCellSpacing;                                                     //@synthesize minimumCellSpacing=_minimumCellSpacing - In the implementation block
@property (assign,nonatomic) float desiredWidth;                                                           //@synthesize desiredWidth=_desiredWidth - In the implementation block
@property (nonatomic,readonly) UIFontDescriptor * fittingFontDescriptor;                                   //@synthesize fittingFontDescriptor=_fittingFontDescriptor - In the implementation block
@property (nonatomic,readonly) float fittingCellSpacing;                                                   //@synthesize fittingCellSpacing=_fittingCellSpacing - In the implementation block
@property (nonatomic,readonly) CGSize totalFittingSize;                                                    //@synthesize totalFittingSize=_totalFittingSize - In the implementation block
-(void)_setNeedsUpdate;
-(void)setDataSource:(id<MPUExtrasMainMenuSectionMetricsDataSource>)arg1 ;
-(void)dealloc;
-(id<MPUExtrasMainMenuSectionMetricsDataSource>)dataSource;
-(float)desiredWidth;
-(void)setDesiredWidth:(float)arg1 ;
-(void)_recalculateSizes;
-(UIFontDescriptor *)fittingFontDescriptor;
-(CGSize)sizeForCellAtIndex:(int)arg1 ;
-(void)setDesiredFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)setMinimumFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)setMinimumCellSpacing:(float)arg1 ;
-(void)setDesiredCellSpacing:(float)arg1 ;
-(void)updateSizes;
-(CGSize)totalFittingSize;
-(float)fittingCellSpacing;
-(void)_updateAllMetrics;
-(float)desiredCellSpacing;
-(UIFontDescriptor *)desiredFontDescriptor;
-(CGSize)_horizontalFittingSizeForFontDescriptor:(id)arg1 gutterSize:(float)arg2 itemCount:(int)arg3 itemSizes:(out CGSize*)arg4 ;
-(void)setFittingWidth:(float)arg1 ;
-(UIFontDescriptor *)minimumFontDescriptor;
-(float)minimumCellSpacing;
@end

