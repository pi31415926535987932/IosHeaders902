/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <libobjc.A.dylib/GSAdditionStoringPrivate.h>
#import <libobjc.A.dylib/GSAdditionStoring.h>

@class NSURL, GSDocumentIdentifier, GSStagingPrefix, NSData;

@interface GSPermanentStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring> {

	GSDocumentIdentifier* _documentID;
	GSStagingPrefix* _stagingPrefix;
	NSURL* _documentURL;
	unsigned long long _remoteID;
	unsigned long long _storageID;
	NSData* _pubExtension;
	NSData* _privExtension;
	long long _pubHandle;
	long long _privHandle;

}

@property (nonatomic,readonly) unsigned long long storageID;                                    //@synthesize storageID=_storageID - In the implementation block
@property (nonatomic,readonly) long long remoteID; 
@property (nonatomic,retain) GSStagingPrefix * stagingPrefix;                                   //@synthesize stagingPrefix=_stagingPrefix - In the implementation block
@property (retain) NSData * pubExtension; 
@property (retain) NSData * privExtension; 
@property (nonatomic,readonly) GSDocumentIdentifier * documentID; 
@property (retain) NSURL * documentURL;                                                         //@synthesize documentURL=_documentURL - In the implementation block
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier;              //@synthesize documentID=_documentID - In the implementation block
+(id)storagePrefixForFileDescriptor:(int)arg1 error:(id*)arg2 ;
+(id)storageIDForItemAtURL:(id)arg1 error:(id*)arg2 ;
-(NSEnumerator*)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4 ;
-(void)removeAdditions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(char)arg2 creationInfo:(id)arg3 error:(id*)arg4 ;
-(void)cleanupStagingURL:(id)arg1 ;
-(void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)_invalidate;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(NSURL *)documentURL;
-(GSDocumentIdentifier *)documentID;
-(NSData *)privExtension;
-(NSData *)pubExtension;
-(id)getAdditionDictionary:(id)arg1 error:(id*)arg2 ;
-(char)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(char)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)_connectionWithDaemonWasLost;
-(char)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4 ;
-(id)URLforReplacingItemWithError:(id*)arg1 ;
-(void)setPubExtension:(NSData *)arg1 ;
-(void)setPrivExtension:(NSData *)arg1 ;
-(char)_refreshRemoteIDWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(id)stagingURLforCreatingAdditionWithError:(id*)arg1 ;
-(char)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4 ;
-(id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3 ;
-(id)initWithFileDescriptor:(int)arg1 documentID:(id)arg2 forItemAtURL:(id)arg3 error:(id*)arg4 ;
-(char)transferToItemAtURL:(id)arg1 error:(id*)arg2 ;
-(GSStagingPrefix *)stagingPrefix;
-(void)setStagingPrefix:(GSStagingPrefix *)arg1 ;
-(unsigned long long)storageID;
-(long long)remoteID;
-(void)finalize;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
@end

