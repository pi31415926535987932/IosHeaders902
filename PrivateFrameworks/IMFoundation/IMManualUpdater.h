/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IMManualUpdater : NSObject {

	id _target;
	SEL _action;
	unsigned _needsUpdate : 1;

}

@property (assign,nonatomic) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) char needsUpdate; 
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(char)needsUpdate;
-(void)setNeedsUpdate:(char)arg1 ;
@end

