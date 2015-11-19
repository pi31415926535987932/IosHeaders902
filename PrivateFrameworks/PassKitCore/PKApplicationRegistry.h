/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableSet, NSString, NSObject;

@interface PKApplicationRegistry : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSMutableSet* _registeredBundleIdentifiers;
	NSString* _archiveFilePath;
	NSObject*<OS_dispatch_semaphore> _archiveSemaphore;
	NSObject*<OS_dispatch_queue> _registrySerialQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)applicationRegistryWithArchiveFilePath:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)setArchiveFilePath:(id)arg1 ;
-(id)initWithArchivePath:(id)arg1 ;
-(void)_validateRegisteredApplications;
-(void)_requestArchiveToDisk;
-(char)registerApplicationWithBundeIdentifier:(id)arg1 ;
-(char)applicationIsRegisteredWithBundleIdentifier:(id)arg1 ;
@end

