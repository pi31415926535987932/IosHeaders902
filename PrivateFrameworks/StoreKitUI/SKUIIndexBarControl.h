/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate;
@class SKUIIndexBarEntry, NSArray, NSMapTable, NSIndexPath, NSDictionary;

@interface SKUIIndexBarControl : UIControl {

	SKUIIndexBarEntry* _combinedEntry;
	char _didSendPastBottom;
	char _didSendPastTop;
	NSArray* _displayEntries;
	char _hasValidCombinedEntry;
	char _hasValidDisplayEntries;
	char _hasValidNumberOfSections;
	char _hasValidTotalEntryCount;
	char _hasValidTotalSize;
	NSMapTable* _indexPathToEntryMapTable;
	NSIndexPath* _lastSelectedIndexPath;
	float _lineSpacing;
	int _numberOfSections;
	NSMapTable* _sectionIndexToNumberOfEntriesMapTable;
	int _totalEntryCount;
	CGSize _totalSize;
	struct {
		unsigned dataSourceRespondsToCombinedEntry : 1;
		unsigned dataSourceRespondsToNumberOfSections : 1;
		unsigned delegateRespondsToDidSelectEntryAtIndexPath : 1;
		unsigned delegateRespondsToDidSelectBeyondBottom : 1;
		unsigned delegateRespondsToDidSelectBeyondTop : 1;
	}  _dataSourceDelegateFlags;
	id<SKUIIndexBarControlDataSource> _dataSource;
	NSDictionary* _defaultTextAttributes;
	id<SKUIIndexBarControlDelegate> _delegate;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                   //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;                                   //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIIndexBarControlDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTextAttributes;                               //@synthesize defaultTextAttributes=_defaultTextAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIIndexBarControlDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int numberOfSections; 
-(int)_numberOfSections;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id<SKUIIndexBarControlDataSource>)arg1 ;
-(void)setDelegate:(id<SKUIIndexBarControlDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<SKUIIndexBarControlDataSource>)dataSource;
-(id<SKUIIndexBarControlDelegate>)delegate;
-(int)numberOfSections;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)tintColorDidChange;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGRect)_visibleBounds;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)contentEdgeInsets;
-(void)reloadSections:(id)arg1 ;
-(void)setDefaultTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultTextAttributes;
-(CGSize)_totalSize;
-(void)reloadCombinedEntry;
-(void)reloadEntryAtIndexPath:(id)arg1 ;
-(id)_displayEntries;
-(void)_invalidateForChangedLayoutProperties;
-(void)_sendSelectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_invalidateDisplayEntries;
-(int)_numberOfEntriesInSection:(int)arg1 ;
-(id)_entryAtIndexPath:(id)arg1 ;
-(void)_enumerateEntryIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)_configureNewEntry:(id)arg1 ;
-(id)_allEntries;
-(CGSize)_sizeForEntries:(id)arg1 ;
-(id)_combinedEntry;
-(id)_displayEntriesThatFitInViewForGroupedEntries;
-(id)_allRequiredEntries;
-(char)_reloadLineSpacing;
-(int)_totalEntryCount;
-(CGSize)_sizeForEntryAtIndexPath:(id)arg1 ;
-(int)numberOfEntriesInSection:(int)arg1 ;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
@end

