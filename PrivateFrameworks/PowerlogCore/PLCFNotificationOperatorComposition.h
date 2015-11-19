/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, PLOperator, NSObject;

@interface PLCFNotificationOperatorComposition : NSObject {

	char _listeningForNotifications;
	char _isStateRequired;
	NSString* _notificationName;
	/*^block*/id _operatorBlock;
	PLOperator* _operator;
	NSObject*<OS_dispatch_queue> _workQueue;
	int _stateToken;

}

@property (retain) NSString * notificationName;                         //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,copy) id operatorBlock;                            //@synthesize operatorBlock=_operatorBlock - In the implementation block
@property (assign) char listeningForNotifications;                      //@synthesize listeningForNotifications=_listeningForNotifications - In the implementation block
@property (__weak) PLOperator * operator;                               //@synthesize operator=_operator - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) char isStateRequired;                                //@synthesize isStateRequired=_isStateRequired - In the implementation block
@property (assign) int stateToken;                                      //@synthesize stateToken=_stateToken - In the implementation block
-(void)dealloc;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)operatorBlock;
-(void)setOperatorBlock:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 requireState:(char)arg3 withBlock:(/*^block*/id)arg4 ;
-(char)listeningForNotifications;
-(void)setListeningForNotifications:(char)arg1 ;
-(char)isStateRequired;
-(void)setIsStateRequired:(char)arg1 ;
-(int)stateToken;
-(void)setStateToken:(int)arg1 ;
-(PLOperator *)operator;
-(id)initWithOperator:(id)arg1 forNotification:(id)arg2 requireState:(char)arg3 withBlock:(/*^block*/id)arg4 ;
-(char)listenForNotifications:(char)arg1 ;
-(void)setOperator:(PLOperator *)arg1 ;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
@end

