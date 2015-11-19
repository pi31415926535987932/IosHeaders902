/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CPDistributedMessagingCallout : NSObject {

	id _target;
	SEL _selector;
	char _returnsVoid;
	char _returnsVoidIsValid;

}

@property (nonatomic,retain,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) char returnsVoid;              //@synthesize returnsVoid=_returnsVoid - In the implementation block
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(char)returnsVoid;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end
