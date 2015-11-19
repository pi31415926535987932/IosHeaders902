/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/MBCoding.h>

@class MBFileID, MBDomain, NSString, NSData, NSDictionary, NSDate;

@interface MBFile : NSObject <MBCoding> {

	unsigned _snapshotID;
	MBFileID* _fileID;
	MBDomain* _domain;
	MBDomain* _nonRedirectedDomain;
	NSString* _relativePath;
	NSString* _absolutePath;
	char* _absolutePathFSR;
	char _committed;
	char _deleted;
	int _priority;
	NSString* _target;
	NSData* _digest;
	unsigned _keybagID;
	NSData* _encryptionKey;
	unsigned _encryptionKeyVersion;
	unsigned long long _decryptedSize;
	unsigned short _mode;
	unsigned long long _inodeNumber;
	unsigned _userID;
	unsigned _groupID;
	long _lastModified;
	long _lastStatusChange;
	long _birth;
	long long _size;
	int _protectionClass;
	NSDictionary* _extendedAttributes;

}

@property (assign,nonatomic) unsigned snapshotID;                                      //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,readonly) MBFileID * fileID;                                      //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) MBDomain * domain;                                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) MBDomain * nonRedirectedDomain;                         //@synthesize nonRedirectedDomain=_nonRedirectedDomain - In the implementation block
@property (nonatomic,readonly) NSString * relativePath;                                //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,readonly) NSString * absolutePath;                                //@synthesize absolutePath=_absolutePath - In the implementation block
@property (nonatomic,readonly) const char* absolutePathFSR; 
@property (assign,getter=isCommitted,nonatomic) char committed;                        //@synthesize committed=_committed - In the implementation block
@property (assign,getter=isDeleted,nonatomic) char deleted;                            //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,readonly) NSString * aggregateDictionaryGroup; 
@property (assign,nonatomic) int priority;                                             //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSString * target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSData * digest;                                          //@synthesize digest=_digest - In the implementation block
@property (assign,nonatomic) unsigned keybagID;                                        //@synthesize keybagID=_keybagID - In the implementation block
@property (readonly) const char* keybagUUID; 
@property (nonatomic,retain) NSData * encryptionKey;                                   //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (assign,nonatomic) unsigned encryptionKeyVersion;                            //@synthesize encryptionKeyVersion=_encryptionKeyVersion - In the implementation block
@property (assign,nonatomic) unsigned long long decryptedSize;                         //@synthesize decryptedSize=_decryptedSize - In the implementation block
@property (assign,nonatomic) unsigned short mode;                                      //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSString * modeString; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) NSString * typeString; 
@property (nonatomic,readonly) unsigned short permissions; 
@property (nonatomic,readonly) NSString * permissionsString; 
@property (getter=isDirectory,nonatomic,readonly) char directory; 
@property (getter=isRegularFile,nonatomic,readonly) char regularFile; 
@property (getter=isSymbolicLink,nonatomic,readonly) char symbolicLink; 
@property (getter=isSupportedType,nonatomic,readonly) char supportedType; 
@property (assign,nonatomic) unsigned long long inodeNumber;                           //@synthesize inodeNumber=_inodeNumber - In the implementation block
@property (assign,nonatomic) unsigned userID;                                          //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) unsigned groupID;                                         //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) long lastModified;                                        //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (assign,nonatomic) long lastStatusChange;                                    //@synthesize lastStatusChange=_lastStatusChange - In the implementation block
@property (nonatomic,readonly) NSDate * lastStatusChangeDate; 
@property (assign,nonatomic) long birth;                                               //@synthesize birth=_birth - In the implementation block
@property (nonatomic,readonly) NSDate * birthDate; 
@property (assign,nonatomic) long long size;                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) int protectionClass;                                      //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,retain) NSDictionary * extendedAttributes;                        //@synthesize extendedAttributes=_extendedAttributes - In the implementation block
+(id)symbolicLinkTargetWithPathFSR:(const char*)arg1 error:(id*)arg2 ;
+(id)symbolicLinkTargetWithPath:(id)arg1 error:(id*)arg2 ;
+(id)fileWithDomain:(id)arg1 relativePath:(id)arg2 ;
+(id)stringWithType:(unsigned short)arg1 ;
+(id)fileWithDecoder:(id)arg1 database:(id)arg2 ;
-(void)setSnapshotID:(unsigned)arg1 ;
-(const char*)keybagUUID;
-(NSData *)encryptionKey;
-(long)birth;
-(unsigned)keybagID;
-(char)isStatusChangedComparedToFile:(id)arg1 ;
-(unsigned long long)inodeNumber;
-(const char*)absolutePathFSR;
-(id)backupSymbolicLinkTarget;
-(void)setKeybagID:(unsigned)arg1 ;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(void)setEncryptionKeyVersion:(unsigned)arg1 ;
-(void)setDecryptedSize:(unsigned long long)arg1 ;
-(void)setStat:(stat*)arg1 ;
-(unsigned)encryptionKeyVersion;
-(unsigned long long)decryptedSize;
-(void)setInodeNumber:(unsigned long long)arg1 ;
-(void)setLastStatusChange:(long)arg1 ;
-(void)setBirth:(long)arg1 ;
-(long)lastStatusChange;
-(id)restoreEmptyRegularFileAtPath:(id)arg1 ;
-(id)restoreDirectoryAtPath:(id)arg1 settingDataProtection:(char)arg2 ;
-(id)restoreSymbolicLinkAtPath:(id)arg1 ;
-(id)restoreRegularFileAtPath:(id)arg1 ;
-(char)isSupportedType;
-(id)initWithDomain:(id)arg1 relativePath:(id)arg2 ;
-(id)initWithDecoder:(id)arg1 database:(id)arg2 ;
-(NSString *)modeString;
-(NSDate *)lastStatusChangeDate;
-(NSString *)permissionsString;
-(id)setProtectionClassWithFD:(int)arg1 ;
-(id)_setProtectionClassWithPathFSR:(const char*)arg1 ;
-(id)restoreLastModifiedWithFD:(int)arg1 ;
-(id)initWithDecoder:(id)arg1 ;
-(void)encode:(id)arg1 ;
-(void)stat:(stat*)arg1 ;
-(MBDomain *)nonRedirectedDomain;
-(void)setProtectionClass:(int)arg1 ;
-(NSData *)digest;
-(void)setDigest:(NSData *)arg1 ;
-(void)setLastModified:(long)arg1 ;
-(char)isDirectory;
-(char)isSymbolicLink;
-(NSDate *)lastModifiedDate;
-(char)isDeleted;
-(unsigned)groupID;
-(void)setGroupID:(unsigned)arg1 ;
-(long long)size;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)setTarget:(NSString *)arg1 ;
-(unsigned short)type;
-(MBDomain *)domain;
-(NSString *)target;
-(void)setSize:(long long)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)setMode:(unsigned short)arg1 ;
-(unsigned short)mode;
-(char)isRegularFile;
-(void)setCommitted:(char)arg1 ;
-(char)isCommitted;
-(MBFileID *)fileID;
-(NSString *)absolutePath;
-(NSDate *)birthDate;
-(int)protectionClass;
-(NSString *)typeString;
-(unsigned)userID;
-(void)setUserID:(unsigned)arg1 ;
-(NSString *)aggregateDictionaryGroup;
-(unsigned)snapshotID;
-(NSDictionary *)extendedAttributes;
-(void)setExtendedAttributes:(NSDictionary *)arg1 ;
-(NSString *)relativePath;
-(void)setDeleted:(char)arg1 ;
-(long)lastModified;
-(unsigned short)permissions;
@end

