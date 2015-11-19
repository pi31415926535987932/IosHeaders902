/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FuseUI/FuseUI-Structs.h>
@interface MusicLibraryBrowseCollectionViewLayoutMetrics : NSObject {

	char _wantsEdgeToEdgeLayout;
	float _itemWidth;
	float _itemHeight;
	float _minimumInteritemSpacing;
	CGSize _headerSize;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _sectionInsets;
	UIEdgeInsets _headerViewContentInsets;

}

@property (assign,nonatomic) float itemWidth;                                   //@synthesize itemWidth=_itemWidth - In the implementation block
@property (assign,nonatomic) float itemHeight;                                  //@synthesize itemHeight=_itemHeight - In the implementation block
@property (nonatomic,readonly) CGSize itemSize; 
@property (assign,nonatomic) float minimumInteritemSpacing;                     //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                        //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInsets;                        //@synthesize sectionInsets=_sectionInsets - In the implementation block
@property (assign,nonatomic) char wantsEdgeToEdgeLayout;                        //@synthesize wantsEdgeToEdgeLayout=_wantsEdgeToEdgeLayout - In the implementation block
@property (assign,nonatomic) CGSize headerSize;                                 //@synthesize headerSize=_headerSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerViewContentInsets;              //@synthesize headerViewContentInsets=_headerViewContentInsets - In the implementation block
-(void)setHeaderSize:(CGSize)arg1 ;
-(CGSize)headerSize;
-(id)description;
-(void)setMinimumInteritemSpacing:(float)arg1 ;
-(float)minimumInteritemSpacing;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setItemWidth:(float)arg1 ;
-(float)itemWidth;
-(CGSize)itemSize;
-(UIEdgeInsets)headerViewContentInsets;
-(UIEdgeInsets)sectionInsets;
-(void)setHeaderViewContentInsets:(UIEdgeInsets)arg1 ;
-(void)setSectionInsets:(UIEdgeInsets)arg1 ;
-(void)setItemHeight:(float)arg1 ;
-(void)setWantsEdgeToEdgeLayout:(char)arg1 ;
-(char)wantsEdgeToEdgeLayout;
-(void)populateHorizontalMetricsWithSize:(CGSize)arg1 minimumHorizontalEdgeSpacing:(float)arg2 maximumColumnCount:(int)arg3 interitemSpacing:(float)arg4 minimumCellWidth:(float)arg5 traitCollection:(id)arg6 ;
-(void)populateHorizontalMetricsWithSize:(CGSize)arg1 linearRelationWidth:(UIOffset)arg2 maximumWidth:(float)arg3 ;
-(float)itemHeight;
@end

