/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	UIColor* _backgroundColor;
	int _position;
	float _zoomingImageAlpha;
	float _zoomingImageWidth;
	float _zoomingImageImposedAlphaOfOtherViews;
	float _zoomingImageLambda;

}

@property (nonatomic,copy) UIColor * backgroundColor;                                                                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) int position;                                                                                    //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float zoomingImageAlpha;                                                                         //@synthesize zoomingImageAlpha=_zoomingImageAlpha - In the implementation block
@property (assign,nonatomic) float zoomingImageWidth;                                                                         //@synthesize zoomingImageWidth=_zoomingImageWidth - In the implementation block
@property (assign,nonatomic) float zoomingImageImposedAlphaOfOtherViews;                                                      //@synthesize zoomingImageImposedAlphaOfOtherViews=_zoomingImageImposedAlphaOfOtherViews - In the implementation block
@property (assign,setter=_setZoomingImageLambda:,getter=_zoomingImageLambda,nonatomic) float zoomingImageLambda;              //@synthesize zoomingImageLambda=_zoomingImageLambda - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(float)zoomingImageWidth;
-(float)zoomingImageImposedAlphaOfOtherViews;
-(float)zoomingImageAlpha;
-(void)setZoomingImageAlpha:(float)arg1 ;
-(void)setZoomingImageWidth:(float)arg1 ;
-(void)setZoomingImageImposedAlphaOfOtherViews:(float)arg1 ;
-(float)_zoomingImageLambda;
-(void)_setZoomingImageLambda:(float)arg1 ;
@end
