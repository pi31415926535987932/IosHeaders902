/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, _UIKeyboardArbiter;


@protocol _UIKeyboardArbiterLink <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) _UIKeyboardArbiter * owner; 
@property (nonatomic,readonly) char isAvailable; 
@required
-(NSString *)serviceName;
-(char)isAvailable;
-(void)detach:(id)arg1;
-(void)connectWithQueue:(id)arg1;
-(void)createSceneWithCompletion:(/*^block*/id)arg1;
-(void)updateSceneSettings;
-(void)setOwner:(id)arg1;
-(_UIKeyboardArbiter *)owner;
-(void)attach:(id)arg1;

@end

