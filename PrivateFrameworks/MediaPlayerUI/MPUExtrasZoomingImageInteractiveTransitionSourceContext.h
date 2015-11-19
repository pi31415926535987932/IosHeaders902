/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIPinchGestureRecognizer, NSString;

@interface MPUExtrasZoomingImageInteractiveTransitionSourceContext : NSObject {

	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	unsigned _itemIndex;
	unsigned _supportedZoomingImageTransitionDirections;
	NSString* _identifier;

}

@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;               //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (assign,nonatomic) unsigned itemIndex;                                              //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,nonatomic) unsigned supportedZoomingImageTransitionDirections;              //@synthesize supportedZoomingImageTransitionDirections=_supportedZoomingImageTransitionDirections - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(void)setSupportedZoomingImageTransitionDirections:(unsigned)arg1 ;
-(unsigned)supportedZoomingImageTransitionDirections;
-(unsigned)itemIndex;
-(void)setItemIndex:(unsigned)arg1 ;
@end

