/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSURL, NSUUID, NSDictionary, NSXPCConnection;


@protocol PKSubsystemServicePersonality <NSObject>
@property (readonly) NSString * identifier; 
@property (readonly) NSString * version; 
@property (readonly) NSURL * url; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDictionary * bundleInfoDictionary; 
@property (readonly) NSDictionary * plugInDictionary; 
@property (readonly) NSXPCConnection * connection; 
@required
-(NSString *)identifier;
-(NSURL *)url;
-(NSString *)version;
-(NSUUID *)uuid;
-(NSXPCConnection *)connection;
-(NSDictionary *)bundleInfoDictionary;
-(NSDictionary *)plugInDictionary;

@end

