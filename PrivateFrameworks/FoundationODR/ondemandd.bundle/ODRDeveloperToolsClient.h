/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ondemandd/ODRDeveloperToolsProtocol.h>

@class NSString;

@interface ODRDeveloperToolsClient : NSObject <ODRDeveloperToolsProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getSimulatedBandwidthWithReply:(/*^block*/id)arg1 ;
-(void)setSimulatedBandwidth:(unsigned)arg1 withReply:(/*^block*/id)arg2 ;
-(void)tagStatusForBundle:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)purgeAllTagsInBundleWithID:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)purgeTagWithName:(id)arg1 inBundleWithID:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)registerManifest:(id)arg1 forBundleID:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(id)interface;
-(id)initWithConnection:(id)arg1 ;
@end

