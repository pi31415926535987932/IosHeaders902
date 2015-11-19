/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BRCBookmark, BRCGenerationID, BRCServerZone, BRCItemID, NSDirectoryEnumerator, BRCAccountSession, NSData, NSNumber, BRCLocalContainer, NSURL;

@interface BRCRelativePath : NSObject <NSSecureCoding> {

	NSString* _absolutePath;
	NSString* _relativePath;
	BRCRelativePath* _basePath;
	BRCBookmark* _bookmark;
	NSString* _symlinkContent;
	BRCGenerationID* _generationID;
	int _deviceID;
	BRCServerZone* _serverZone;
	BRCItemID* _sharedItemID;
	NSString* _sharedOwnerName;
	unsigned char _finderInfo[32];
	unsigned long long _fileID;
	unsigned short _mode;
	unsigned _nlink;
	timespec _birthtime;
	timespec _mtime;
	long long _size;
	unsigned long long _parentFileID;
	unsigned _documentID;
	unsigned _fsGenerationID;
	unsigned _flags;
	unsigned short _type;
	unsigned char _itemScope;
	unsigned _isExcluded : 1;
	unsigned _isInPackage : 1;
	unsigned _isBundle : 1;
	unsigned _isPackageRoot : 1;
	unsigned _readFault : 1;
	unsigned _hasFinderTags : 1;
	unsigned _isBusy : 1;
	unsigned _isAlias : 1;
	unsigned _qtnResolved : 1;
	int _fd;
	Ai _openRefCount;
	opaque_pthread_rwlock_t _mutex;
	SCD_Struct_BR12* _dir;
	NSDirectoryEnumerator* _descendantsEnumerator;
	BRCAccountSession* _session;
	NSData* _quarantineInfo;

}

@property (nonatomic,readonly) char isDocument; 
@property (nonatomic,readonly) char isBundle; 
@property (nonatomic,readonly) char isFault; 
@property (nonatomic,readonly) char isFile; 
@property (nonatomic,readonly) char isPackageRoot; 
@property (nonatomic,readonly) char isInPackage; 
@property (nonatomic,readonly) char isRoot; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned char itemScope; 
@property (nonatomic,readonly) char isUnixDir; 
@property (nonatomic,readonly) char exists; 
@property (nonatomic,readonly) char isWritable; 
@property (nonatomic,readonly) char isExecutable; 
@property (nonatomic,readonly) char isHiddenExtension; 
@property (nonatomic,readonly) char isHiddenFile; 
@property (nonatomic,readonly) char isBusy; 
@property (nonatomic,readonly) char isSymLink; 
@property (nonatomic,readonly) char isExcluded; 
@property (nonatomic,readonly) char hasFinderTags; 
@property (nonatomic,readonly) char isAlias; 
@property (nonatomic,readonly) unsigned long fileType; 
@property (nonatomic,readonly) unsigned long long fileID; 
@property (nonatomic,readonly) unsigned long long parentFileID; 
@property (nonatomic,readonly) unsigned hardlinkCount; 
@property (nonatomic,readonly) unsigned documentID; 
@property (nonatomic,readonly) NSNumber * fileObjectID; 
@property (nonatomic,readonly) int deviceID; 
@property (nonatomic,readonly) long long size; 
@property (nonatomic,readonly) long modificationTime; 
@property (nonatomic,readonly) long birthTime; 
@property (nonatomic,readonly) unsigned fsGenerationID; 
@property (nonatomic,readonly) BRCGenerationID * generationID; 
@property (nonatomic,readonly) BRCItemID * sharedItemID; 
@property (nonatomic,readonly) NSString * sharedOwnerName; 
@property (nonatomic,readonly) BRCAccountSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BRCLocalContainer * container; 
@property (nonatomic,readonly) BRCServerZone * serverZone; 
@property (nonatomic,readonly) NSString * absolutePath; 
@property (nonatomic,readonly) NSString * pathRelativeToRoot; 
@property (nonatomic,readonly) NSString * pathRelativeToPackageRoot; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * logicalName; 
@property (nonatomic,readonly) NSString * symlinkContent; 
@property (nonatomic,readonly) BRCRelativePath * root; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * faultDisplayName; 
@property (nonatomic,readonly) BRCBookmark * bookmark; 
@property (nonatomic,readonly) NSData * quarantineInfo;                           //@synthesize quarantineInfo=_quarantineInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) unsigned parentHash; 
+(char)supportsSecureCoding;
+(int)locateByFileID:(unsigned long long)arg1 zone:(id)arg2 ;
-(NSString *)sharedOwnerName;
-(char)isResolved;
-(void)_close;
-(BRCAccountSession *)session;
-(char)isBusy;
-(char)exists;
-(char)isFault;
-(long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSURL *)url;
-(unsigned short)type;
-(BRCLocalContainer *)container;
-(void)close;
-(unsigned long)fileType;
-(unsigned long long)fileID;
-(char)isDocument;
-(NSString *)faultDisplayName;
-(NSString *)absolutePath;
-(NSNumber *)fileObjectID;
-(char)isFile;
-(long)modificationTime;
-(long)birthTime;
-(char)isAlias;
-(NSString *)logicalName;
-(unsigned long long)parentFileID;
-(char)resolveMustExist:(char)arg1 error:(int*)arg2 ;
-(id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2 ;
-(BRCServerZone *)serverZone;
-(unsigned)documentID;
-(unsigned char)itemScope;
-(id)initWithFileID:(unsigned long long)arg1 zone:(id)arg2 ;
-(char)resolveAndKeepOpenMustExist:(char)arg1 error:(int*)arg2 ;
-(char)performOnOpenParentFileDescriptor:(/*^block*/id)arg1 error:(int*)arg2 ;
-(char)isInPackage;
-(id)pathOfPackageRoot;
-(BRCItemID *)sharedItemID;
-(id)logicalURLWithLogicalName:(id)arg1 ;
-(NSString *)pathRelativeToRoot;
-(id)pathWithChildAtPath:(id)arg1 ;
-(char)performOnOpenFileDescriptor:(/*^block*/id)arg1 error:(int*)arg2 ;
-(id)refreshFromPathMustExist:(char)arg1 ;
-(char)isExecutable;
-(NSData *)quarantineInfo;
-(NSString *)symlinkContent;
-(char)isUnixDir;
-(char)isPackageRoot;
-(char)isSymLink;
-(char)_fixupRelativePath;
-(int)_resolvePathTypeAndContainer;
-(char)_shouldKeepBasePathOpen;
-(int)_resolveBasePath;
-(int)_resolveWhenExists;
-(int)_resolveWhenDoesntExist;
-(NSString *)pathRelativeToPackageRoot;
-(int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2 ;
-(char)_resolveAndKeepOpenMustExist:(char)arg1 error:(int*)arg2 ;
-(char)isEqualToRelativePath:(id)arg1 ;
-(id)initWithRootPath:(id)arg1 session:(id)arg2 ;
-(id)initWithPath:(id)arg1 zone:(id)arg2 ;
-(char)isExcluded;
-(unsigned)hardlinkCount;
-(unsigned)fsGenerationID;
-(char)isHiddenExtension;
-(char)isHiddenFile;
-(char)hasFinderTags;
-(char)flock:(int)arg1 ;
-(char)openDirectoryForScanWithError:(int*)arg1 ;
-(id)nextChild;
-(char)openDirectoryForRecursiveScan;
-(id)nextDescendant;
-(void)closeDirectoryScan;
-(BRCBookmark *)bookmark;
-(unsigned)parentHash;
-(BRCGenerationID *)generationID;
-(int)deviceID;
-(char)isWritable;
-(char)isBundle;
-(BRCRelativePath *)root;
-(NSString *)filename;
-(char)isRoot;
@end

