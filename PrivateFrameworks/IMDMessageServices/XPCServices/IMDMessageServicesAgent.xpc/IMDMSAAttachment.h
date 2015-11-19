/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/XPCServices/IMDMessageServicesAgent.xpc/IMDMessageServicesAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMDMessageServicesAgent/IMDMessageServicesAgent-Structs.h>
@class NSString;

@interface IMDMSAAttachment : NSObject {

	NSString* _GUID;
	NSString* _path;
	NSString* _UTIType;
	NSString* _mimeType;
	char _isOutgoing;

}

@property (getter=UID,nonatomic,copy,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) char isOutgoing;                              //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * UTIType;                      //@synthesize UTIType=_UTIType - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;                     //@synthesize mimeType=_mimeType - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(NSString *)mimeType;
-(id)initWithAttachment:(IMDAttachmentRecordStructRef)arg1 ;
-(NSString *)UTIType;
-(char)isOutgoing;
-(NSString *)GUID;
@end

