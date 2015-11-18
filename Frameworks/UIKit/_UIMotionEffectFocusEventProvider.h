/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIMotionEffectEventProvider.h>

@interface _UIMotionEffectFocusEventProvider : _UIMotionEffectEventProvider {

	char _isGeneratingEvents;
	CGPoint _focusPosition;
	CGPoint _lastReportedPosition;

}

@property (assign,nonatomic) CGPoint focusPosition; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)init;
-(void)setFocusPosition:(CGPoint)arg1 ;
-(char)wantsSynchronizedUpdates;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(id)currentEvent;
-(CGPoint)focusPosition;
@end

