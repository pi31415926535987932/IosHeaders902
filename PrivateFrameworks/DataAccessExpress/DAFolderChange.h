/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol DAFolderChangeConsumer;
@class NSString;

@interface DAFolderChange : NSObject <NSSecureCoding> {

	char _renameOnCollision;
	int _changeType;
	NSString* _folderId;
	NSString* _parentFolderId;
	NSString* _displayName;
	int _dataclass;
	unsigned _taskId;
	id<DAFolderChangeConsumer> _consumer;

}

@property (assign,nonatomic) int changeType;                                          //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * folderId;                                     //@synthesize folderId=_folderId - In the implementation block
@property (nonatomic,retain) NSString * parentFolderId;                               //@synthesize parentFolderId=_parentFolderId - In the implementation block
@property (nonatomic,retain) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int dataclass;                                           //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) unsigned taskId;                                         //@synthesize taskId=_taskId - In the implementation block
@property (assign,nonatomic) char renameOnCollision;                                  //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
@property (assign,nonatomic,__weak) id<DAFolderChangeConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
+(char)supportsSecureCoding;
-(id)mf_deferredOperation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setConsumer:(id<DAFolderChangeConsumer>)arg1 ;
-(id<DAFolderChangeConsumer>)consumer;
-(NSString *)displayName;
-(int)dataclass;
-(void)setFolderId:(NSString *)arg1 ;
-(char)renameOnCollision;
-(void)setParentFolderId:(NSString *)arg1 ;
-(unsigned)taskId;
-(void)setTaskId:(unsigned)arg1 ;
-(id)initFolderChangeWithChangeType:(int)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(int)arg5 consumer:(id)arg6 ;
-(NSString *)folderId;
-(void)setRenameOnCollision:(char)arg1 ;
-(void)setDataclass:(int)arg1 ;
-(NSString *)parentFolderId;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
@end

