/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol CKFeedCollectionViewLayoutDatasource;
@class NSMutableArray;

@interface CKFeedCollectionViewLayout : UICollectionViewLayout {

	NSMutableArray* _sectionLayoutInfos;
	CGSize _contentSize;
	char _shouldDisplayCaptionsBelowBatches;
	char _shouldDisplaySectionHeadersBelowSections;
	char _shouldFloatThumbnails;
	char _shouldFloatSectionHeaders;
	char _shouldFloatWithEase;
	char _shouldFloatOverShortDistances;
	id<CKFeedCollectionViewLayoutDatasource> _feedDatasource;
	unsigned _compositeLayoutSection;
	int _flowDirection;
	float _thumbnailSpacing;
	float _sectionHeaderBackgroundHeight;
	float _floatingBottomDecorationHeight;
	CGSize _sectionReferenceSize;
	CGSize _interTileSpacing;
	CGSize _noCaptionSpacing;
	UIEdgeInsets _captionPadding;
	UIEdgeInsets _floatPadding;

}

@property (assign,nonatomic) id<CKFeedCollectionViewLayoutDatasource> feedDatasource;              //@synthesize feedDatasource=_feedDatasource - In the implementation block
@property (assign,nonatomic) unsigned compositeLayoutSection;                                      //@synthesize compositeLayoutSection=_compositeLayoutSection - In the implementation block
@property (assign,nonatomic) int flowDirection;                                                    //@synthesize flowDirection=_flowDirection - In the implementation block
@property (nonatomic,readonly) unsigned flowDirectionEdge; 
@property (assign,nonatomic) CGSize sectionReferenceSize;                                          //@synthesize sectionReferenceSize=_sectionReferenceSize - In the implementation block
@property (assign,nonatomic) CGSize interTileSpacing;                                              //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets captionPadding;                                          //@synthesize captionPadding=_captionPadding - In the implementation block
@property (assign,nonatomic) CGSize noCaptionSpacing;                                              //@synthesize noCaptionSpacing=_noCaptionSpacing - In the implementation block
@property (assign,nonatomic) char shouldDisplayCaptionsBelowBatches;                               //@synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches - In the implementation block
@property (assign,nonatomic) char shouldDisplaySectionHeadersBelowSections;                        //@synthesize shouldDisplaySectionHeadersBelowSections=_shouldDisplaySectionHeadersBelowSections - In the implementation block
@property (assign,nonatomic) char shouldFloatThumbnails;                                           //@synthesize shouldFloatThumbnails=_shouldFloatThumbnails - In the implementation block
@property (assign,nonatomic) float thumbnailSpacing;                                               //@synthesize thumbnailSpacing=_thumbnailSpacing - In the implementation block
@property (assign,nonatomic) char shouldFloatSectionHeaders;                                       //@synthesize shouldFloatSectionHeaders=_shouldFloatSectionHeaders - In the implementation block
@property (assign,nonatomic) float sectionHeaderBackgroundHeight;                                  //@synthesize sectionHeaderBackgroundHeight=_sectionHeaderBackgroundHeight - In the implementation block
@property (assign,nonatomic) char shouldFloatWithEase;                                             //@synthesize shouldFloatWithEase=_shouldFloatWithEase - In the implementation block
@property (assign,nonatomic) char shouldFloatOverShortDistances;                                   //@synthesize shouldFloatOverShortDistances=_shouldFloatOverShortDistances - In the implementation block
@property (assign,nonatomic) float floatingBottomDecorationHeight;                                 //@synthesize floatingBottomDecorationHeight=_floatingBottomDecorationHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets floatPadding;                                            //@synthesize floatPadding=_floatPadding - In the implementation block
-(void)setSectionReferenceSize:(CGSize)arg1 ;
-(void)setThumbnailSpacing:(float)arg1 ;
-(void)setInterTileSpacing:(CGSize)arg1 ;
-(void)setCaptionPadding:(UIEdgeInsets)arg1 ;
-(void)setNoCaptionSpacing:(CGSize)arg1 ;
-(void)setShouldDisplayCaptionsBelowBatches:(char)arg1 ;
-(void)setShouldFloatThumbnails:(char)arg1 ;
-(void)setShouldDisplaySectionHeadersBelowSections:(char)arg1 ;
-(void)setShouldFloatSectionHeaders:(char)arg1 ;
-(void)setShouldFloatWithEase:(char)arg1 ;
-(void)setShouldFloatOverShortDistances:(char)arg1 ;
-(void)setFloatPadding:(UIEdgeInsets)arg1 ;
-(CGRect)frameForTileAtIndexPath:(id)arg1 ;
-(int)numberOfTilesOmittedInSection:(int)arg1 ;
-(void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3 ;
-(void)setFlowDirection:(int)arg1 ;
-(void)invalidateLayoutAndCache;
-(unsigned)flowDirectionEdge;
-(int)flowDirection;
-(id)sectionsJoinedWithSection:(int)arg1 ;
-(void)enumerateImageElementsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)frameForSection:(int)arg1 ;
-(id)indexPathForImageElementAtPoint:(CGPoint)arg1 ;
-(char)shouldFloatSectionHeaders;
-(char)shouldFloatThumbnails;
-(float)floatingBottomDecorationHeight;
-(float)sectionHeaderBackgroundHeight;
-(void)_updateSectionLayoutInfosIfNecessary;
-(void)_updateGlobalLayoutInfoWithOptions:(int)arg1 sectionsWithUpdatedGroupIDs:(out id*)arg2 ;
-(void)_updateLayoutInfoForSection:(int)arg1 ignoreSizeChange:(char)arg2 ;
-(void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(int)arg2 ;
-(void)_enumerateSectionsInRect:(CGRect)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_getSize:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out int*)arg7 forSection:(int)arg8 isJoined:(char)arg9 ;
-(CGSize)sectionReferenceSize;
-(void)_sectionAtIndex:(int)arg1 sizeDidChangeFrom:(CGSize)arg2 to:(CGSize)arg3 ;
-(UIEdgeInsets)floatPadding;
-(char)shouldFloatOverShortDistances;
-(char)shouldFloatWithEase;
-(void)_getSizeForVerticalFlowDirection:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out int*)arg7 forSection:(int)arg8 isJoined:(char)arg9 ;
-(void)_getSizeForHorizontalFlowDirection:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out int*)arg7 forSection:(int)arg8 isJoined:(char)arg9 ;
-(CGSize)interTileSpacing;
-(UIEdgeInsets)captionPadding;
-(CGSize)noCaptionSpacing;
-(char)shouldDisplayCaptionsBelowBatches;
-(float)thumbnailSpacing;
-(char)shouldDisplaySectionHeadersBelowSections;
-(void)setSectionHeaderBackgroundHeight:(float)arg1 ;
-(void)setFloatingBottomDecorationHeight:(float)arg1 ;
-(id)_delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setFeedDatasource:(id<CKFeedCollectionViewLayoutDatasource>)arg1 ;
-(void)setCompositeLayoutSection:(unsigned)arg1 ;
-(id<CKFeedCollectionViewLayoutDatasource>)feedDatasource;
-(unsigned)compositeLayoutSection;
@end

