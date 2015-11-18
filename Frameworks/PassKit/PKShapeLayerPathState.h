/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PKShapeLayerPathState : NSObject {

	float _strokeStartT0;
	float _strokeStartT1;
	float _strokeEndT0;
	float _strokeEndT1;

}
-(id)initWithStrokeStartT0:(float)arg1 strokeStartT1:(float)arg2 strokeEndT0:(float)arg3 strokeEndT1:(float)arg4 ;
-(id)initWithShapeLayer:(id)arg1 reverse:(char)arg2 ;
-(void)setProgress:(float)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(/*^block*/id)arg3 ;
-(float)strokeStartAtProgress:(float)arg1 ;
-(float)strokeEndAtProgress:(float)arg1 ;
-(id)initWithShapeLayer:(id)arg1 ;
-(id)initWithStrokeStart:(float)arg1 strokeEnd:(float)arg2 ;
-(void)setProgress:(float)arg1 onShapeLayer:(id)arg2 ;
-(float)progressForShapeLayer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

