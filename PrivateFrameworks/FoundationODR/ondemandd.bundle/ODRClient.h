/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ODRServerProtocol.h>

@protocol ODRClientProtocol;
@class NSString, NSLock, NSMutableDictionary;

@interface ODRClient : NSObject <ODRServerProtocol> {

	NSString* _requestingAppBundleID;
	id<ODRClientProtocol> _clientProxy;
	NSLock* _readyLock;
	NSMutableDictionary* _sandboxExtensions;
	NSMutableDictionary* _bundleRequestToDownloadRequest;

}

@property (readonly) NSString * requestingAppBundleID;                                        //@synthesize requestingAppBundleID=_requestingAppBundleID - In the implementation block
@property (nonatomic,retain) id<ODRClientProtocol> clientProxy;                               //@synthesize clientProxy=_clientProxy - In the implementation block
@property (nonatomic,retain) NSLock * readyLock;                                              //@synthesize readyLock=_readyLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sandboxExtensions;                         //@synthesize sandboxExtensions=_sandboxExtensions - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * bundleRequestToDownloadRequest;              //@synthesize bundleRequestToDownloadRequest=_bundleRequestToDownloadRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientForAppBundleID:(id)arg1 ;
+(id)activeClients;
+(void)initialize;
+(void)removeClient:(id)arg1 ;
-(NSString *)requestingAppBundleID;
-(void)setClientProxy:(id<ODRClientProtocol>)arg1 ;
-(NSLock *)readyLock;
-(void)setReadyLock:(NSLock *)arg1 ;
-(id)_bundlePathForBundleURL:(id)arg1 ;
-(id)_issueSandboxExtensionForBundleURL:(id)arg1 ;
-(id)_sandboxExtensionForBundleURL:(id)arg1 ;
-(void)_clearReadyLock;
-(void)_pinAssetPack:(id)arg1 priority:(double)arg2 tagsRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_unpinAssetPack:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_okToPurgeAssetPack:(id)arg1 ;
-(NSMutableDictionary *)bundleRequestToDownloadRequest;
-(void)setBundleRequestToDownloadRequest:(NSMutableDictionary *)arg1 ;
-(void)tagStateInBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginODRSessionWithBundleURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3 ;
-(void)setLoadingPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3 ;
-(void)pinTags:(id)arg1 inBundle:(id)arg2 priority:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)conditionallyPinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)hello:(/*^block*/id)arg1 ;
-(void)unpinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)okToPurgeAssetPacks:(id)arg1 ;
-(void)setAlwaysPreserved:(char)arg1 forTags:(id)arg2 inBundle:(id)arg3 ;
-(id)interface;
-(id<ODRClientProtocol>)clientProxy;
-(id)initWithConnection:(id)arg1 ;
-(NSMutableDictionary *)sandboxExtensions;
-(void)setSandboxExtensions:(NSMutableDictionary *)arg1 ;
@end

