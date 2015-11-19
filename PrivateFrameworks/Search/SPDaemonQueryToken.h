/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SPDaemonQueryDelegate, OS_dispatch_queue;
@class SPSearchQuery, NSObject, NSString;

@interface SPDaemonQueryToken : NSObject <NSCopying> {

	unsigned _queryID;
	SPSearchQuery* _query;
	id<SPDaemonQueryDelegate> _delegate;
	char _queryFinished;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _fbq;
	NSString* _web_fbq;

}

@property (assign,nonatomic,__weak) id<SPDaemonQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned queryID;                                     //@synthesize queryID=_queryID - In the implementation block
@property (nonatomic,readonly) SPSearchQuery * query;                                //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (assign) char queryFinished;                                               //@synthesize queryFinished=_queryFinished - In the implementation block
@property (readonly) NSString * fbq;                                                 //@synthesize fbq=_fbq - In the implementation block
@property (readonly) NSString * web_fbq;                                             //@synthesize web_fbq=_web_fbq - In the implementation block
-(void)handleMessage:(id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDelegate:(id<SPDaemonQueryDelegate>)arg1 ;
-(id<SPDaemonQueryDelegate>)delegate;
-(id)copy;
-(SPSearchQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)queryID;
-(char)queryFinished;
-(void)setQueryFinished:(char)arg1 ;
-(id)initWithQuery:(id)arg1 queue:(id)arg2 ;
-(NSString *)fbq;
-(NSString *)web_fbq;
@end

