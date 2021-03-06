/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIDynamicItem.h>

@class NSString, NSIndexPath, UIBezierPath;

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem> {

	NSString* _elementKind;
	NSIndexPath* _indexPath;
	NSString* _reuseIdentifier;
	CGPoint _center;
	CGSize _size;
	CGRect _frame;
	float _alpha;
	CATransform3D _transform;
	NSString* _isCloneString;
	struct {
		unsigned isCellKind : 1;
		unsigned isDecorationView : 1;
		unsigned isHidden : 1;
		unsigned isClone : 1;
	}  _layoutFlags;
	int _zIndex;

}

@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGPoint center;                                      //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CATransform3D transform3D;                           //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) float alpha;                                         //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) int zIndex;                                          //@synthesize zIndex=_zIndex - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden; 
@property (nonatomic,retain) NSIndexPath * indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) unsigned representedElementCategory; 
@property (nonatomic,readonly) NSString * representedElementKind; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
+(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
+(id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
+(id)layoutAttributesForCellWithIndexPath:(id)arg1 ;
-(CGRect)bounds;
-(CGSize)size;
-(char)isHidden;
-(float)alpha;
-(void)setHidden:(char)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(unsigned)representedElementCategory;
-(NSIndexPath *)indexPath;
-(CGPoint)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
-(id)_reuseIdentifier;
-(id)_elementKind;
-(char)_isCell;
-(char)_isSupplementaryView;
-(char)_isClone;
-(int)zIndex;
-(CATransform3D)transform3D;
-(id)__indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(char)_isDecorationView;
-(id)__elementKind;
-(char)_isEquivalentTo:(id)arg1 ;
-(char)_isTransitionVisibleTo:(id)arg1 ;
-(void)_setReuseIdentifier:(id)arg1 ;
-(void)setTransform3D:(CATransform3D)arg1 ;
-(void)_setIsClone:(char)arg1 ;
-(void)_setElementKind:(id)arg1 ;
-(id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(NSString *)representedElementKind;
-(void)setZIndex:(int)arg1 ;
@end

