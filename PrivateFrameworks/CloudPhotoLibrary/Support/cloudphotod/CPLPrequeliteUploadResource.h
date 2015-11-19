/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PQLResultSetInitializer.h>

@class NSString;

@interface CPLPrequeliteUploadResource : NSObject <PQLResultSetInitializer> {

	char _available;
	unsigned _position;
	unsigned _pendingCount;
	NSString* _itemIdentifier;
	unsigned _resourceType;
	NSString* _fingerPrint;
	NSString* _fileUTI;
	int _fileKind;
	NSString* _originalPath;
	int _retryCount;
	int _status;

}

@property (assign,nonatomic) unsigned position;                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) unsigned pendingCount;                          //@synthesize pendingCount=_pendingCount - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) unsigned resourceType;                          //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy) NSString * fingerPrint;                           //@synthesize fingerPrint=_fingerPrint - In the implementation block
@property (nonatomic,copy) NSString * fileUTI;                               //@synthesize fileUTI=_fileUTI - In the implementation block
@property (assign,nonatomic) int fileKind;                                   //@synthesize fileKind=_fileKind - In the implementation block
@property (nonatomic,copy) NSString * originalPath;                          //@synthesize originalPath=_originalPath - In the implementation block
@property (assign,getter=isAvailable,nonatomic) char available;              //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) int retryCount;                                 //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPendingCount:(unsigned)arg1 ;
-(char)isAvailable;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(unsigned)pendingCount;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(void)setResourceType:(unsigned)arg1 ;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(void)setFileKind:(int)arg1 ;
-(int)fileKind;
-(id)initWithResource:(id)arg1 ;
-(unsigned)resourceType;
-(NSString *)fingerPrint;
-(NSString *)fileUTI;
-(NSString *)originalPath;
-(void)setOriginalPath:(NSString *)arg1 ;
-(void)setAvailable:(char)arg1 ;
-(void)setFileUTI:(NSString *)arg1 ;
-(void)setFingerPrint:(NSString *)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)resource;
@end

