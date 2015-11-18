/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/SpringFactory.h>

@interface ScrollSpringFactory : SpringFactory {

	float _initialVelocity;

}

@property (assign,nonatomic) float initialVelocity;              //@synthesize initialVelocity=_initialVelocity - In the implementation block
+(id)sharedFactory;
-(void)setInitialVelocity:(float)arg1 ;
-(float)initialVelocity;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
@end

