/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSObserver.h>

@protocol _UIForceLevelClassifierDelegate;
@class NSObservationSource, NSMutableDictionary, NSArray, NSString;

@interface _UIForceLevelClassifier : NSObject <NSObserver> {

	NSObservationSource* _progressTouchForceObservable;
	NSMutableDictionary* _cachedProgressObservables;
	NSArray* _delegateObservations;
	char _respectsSystemGestureTouchFiltering;
	int _currentForceLevel;
	id<_UIForceLevelClassifierDelegate> _delegate;
	float _currentTouchForceMultiplier;

}

@property (assign,nonatomic,__weak) id<_UIForceLevelClassifierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int currentForceLevel;                                          //@synthesize currentForceLevel=_currentForceLevel - In the implementation block
@property (assign,nonatomic) float currentTouchForceMultiplier;                                //@synthesize currentTouchForceMultiplier=_currentTouchForceMultiplier - In the implementation block
@property (assign,nonatomic) char respectsSystemGestureTouchFiltering;                         //@synthesize respectsSystemGestureTouchFiltering=_respectsSystemGestureTouchFiltering - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<_UIForceLevelClassifierDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_UIForceLevelClassifierDelegate>)delegate;
-(void)reset;
-(void)setCurrentTouchForceMultiplier:(float)arg1 ;
-(void)_accessibilityForceSensitivityChanged:(id)arg1 ;
-(void)touchForceMultiplierDidChange;
-(char)respectsSystemGestureTouchFiltering;
-(void)observeTouchWithForceValue:(float)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(char)wantsUnclampedForceValues;
-(void)receiveObservedValue:(id)arg1 ;
-(id)observableForProgressToForceLevel:(int)arg1 minimumRequiredForceLevel:(int)arg2 ;
-(id)observableForProgressToForceLevel:(int)arg1 ;
-(void)_notifyDelegateOfProgress:(float)arg1 toForceLevel:(int)arg2 ;
-(void)setCurrentForceLevel:(int)arg1 ;
-(int)currentForceLevel;
-(float)currentTouchForceMultiplier;
-(void)setRespectsSystemGestureTouchFiltering:(char)arg1 ;
@end

