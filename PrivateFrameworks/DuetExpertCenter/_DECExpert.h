/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _DECExpertDelegate;
@class NSXPCConnection, NSObject, _DECBackupHelper, NSString;

@interface _DECExpert : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	_DECBackupHelper* _backupHelper;
	unsigned _category;
	NSString* _identifier;
	id<_DECExpertDelegate> _delegate;

}

@property (assign,nonatomic) unsigned category;                            //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) id<_DECExpertDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_DECExpertDelegate>)arg1 ;
-(id)init;
-(id<_DECExpertDelegate>)delegate;
-(void)setCategory:(unsigned)arg1 ;
-(unsigned)category;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)prewarmPredictionForCategories:(unsigned)arg1 consumer:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)receiveFeedback:(id)arg1 consumer:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)trainWithReply:(/*^block*/id)arg1 ;
-(void)saveModelWithByteLimit:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)restoreModelWithReply:(/*^block*/id)arg1 ;
-(void)predictionForCategories:(unsigned)arg1 consumer:(unsigned)arg2 limit:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithCategory:(unsigned)arg1 identifier:(id)arg2 ;
-(id)initWithCategory:(unsigned)arg1 identifier:(id)arg2 queue:(id)arg3 ;
-(void)setPrediction:(id)arg1 category:(unsigned)arg2 consumer:(unsigned)arg3 ;
@end
