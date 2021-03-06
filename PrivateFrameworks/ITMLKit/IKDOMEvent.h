/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMEvent.h>

@class NSString, IKDOMNode, NSDate;

@interface IKDOMEvent : IKJSObject <IKJSDOMEvent> {

	char _bubbles;
	char _cancelable;
	char _inUse;
	char _defaultPrevented;
	NSString* _type;
	IKDOMNode* _target;
	NSDate* _timeStamp;
	NSString* _xmlAttribute;
	IKDOMNode* _currentTarget;
	int _eventPhase;
	int _dispatchState;

}

@property (nonatomic,retain) IKDOMNode * target;                            //@synthesize target=_target - In the implementation block
@property (nonatomic,retain,readonly) NSString * xmlAttribute;              //@synthesize xmlAttribute=_xmlAttribute - In the implementation block
@property (assign,getter=isInUse,nonatomic) char inUse;                     //@synthesize inUse=_inUse - In the implementation block
@property (nonatomic,retain) IKDOMNode * currentTarget;                     //@synthesize currentTarget=_currentTarget - In the implementation block
@property (assign,nonatomic) int eventPhase;                                //@synthesize eventPhase=_eventPhase - In the implementation block
@property (assign,nonatomic) int dispatchState;                             //@synthesize dispatchState=_dispatchState - In the implementation block
@property (assign,nonatomic) char defaultPrevented;                         //@synthesize defaultPrevented=_defaultPrevented - In the implementation block
@property (nonatomic,retain,readonly) NSString * type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char bubbles;                                //@synthesize bubbles=_bubbles - In the implementation block
@property (nonatomic,readonly) char cancelable;                             //@synthesize cancelable=_cancelable - In the implementation block
@property (nonatomic,readonly) NSDate * timeStamp;                          //@synthesize timeStamp=_timeStamp - In the implementation block
-(void)setTarget:(IKDOMNode *)arg1 ;
-(NSString *)type;
-(IKDOMNode *)target;
-(void)setDefaultPrevented:(char)arg1 ;
-(NSDate *)timeStamp;
-(char)bubbles;
-(char)isPropagationStopped;
-(void)updateDispatchStateWithCurrentTarget:(id)arg1 phase:(int)arg2 ;
-(NSString *)xmlAttribute;
-(char)isImmediatePropagationStopped;
-(id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(char)arg4 isCancelable:(char)arg5 ;
-(id)initWithType:(id)arg1 eventInit:(id)arg2 ;
-(void)setCurrentTarget:(IKDOMNode *)arg1 ;
-(void)setEventPhase:(int)arg1 ;
-(int)dispatchState;
-(void)setDispatchState:(int)arg1 ;
-(char)isInUse;
-(void)setInUse:(char)arg1 ;
-(IKDOMNode *)currentTarget;
-(int)eventPhase;
-(char)cancelable;
-(char)defaultPrevented;
-(void)stopPropagation;
-(void)preventDefault;
-(void)stopImmediatePropagation;
@end

