/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <pairedsyncd/PSDProgressDelegate.h>

@protocol PSDProgressDelegate <NSObject>
@required
-(void)scheduler:(id)arg1 didFinishActivity:(id)arg2 withError:(id)arg3 nextActivity:(id)arg4;
-(void)scheduler:(id)arg1 didUpdateActivityProgress:(float)arg2 totalProgress:(float)arg3;
-(void)schedulerDidComplete:(id)arg1;
-(void)scheduler:(id)arg1 didChangeProgressState:(int)arg2;

@end

#import <libobjc.A.dylib/PSYProgressServer.h>

@class NSXPCConnection, NSString;

@interface PSDProgressDelegate : NSObject <PSDProgressDelegate, PSYProgressServer> {

	NSXPCConnection* _connection;
	char _isClientEntitled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scheduler:(id)arg1 didFinishActivity:(id)arg2 withError:(id)arg3 nextActivity:(id)arg4 ;
-(void)scheduler:(id)arg1 didUpdateActivityProgress:(float)arg2 totalProgress:(float)arg3 ;
-(void)schedulerDidComplete:(id)arg1 ;
-(void)scheduler:(id)arg1 didChangeProgressState:(int)arg2 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(oneway void)getCurrentStateWithCompletion:(/*^block*/id)arg1 ;
-(id)progressClient;
@end

