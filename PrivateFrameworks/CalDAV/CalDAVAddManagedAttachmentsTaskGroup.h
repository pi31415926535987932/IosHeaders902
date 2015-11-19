/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSString, NSData, NSDictionary, NSMutableDictionary;

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup {

	NSURL* _postURLWithQuery;
	char _hadPreconditionFailure;
	int _state;
	NSString* _previousETag;
	NSString* _previousScheduleTag;
	NSData* _updatedResourcePayload;
	NSString* _updatedETag;
	NSString* _updatedScheduleTag;
	NSDictionary* _postFailureSizes;
	NSURL* _resourceURL;
	NSDictionary* _attachments;
	NSDictionary* _contentTypes;
	NSMutableDictionary* _filenamesToServerLocation;

}

@property (assign,nonatomic) int state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                                      //@synthesize previousETag=_previousETag - In the implementation block
@property (nonatomic,retain) NSString * previousScheduleTag;                               //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
@property (nonatomic,retain) NSData * updatedResourcePayload;                              //@synthesize updatedResourcePayload=_updatedResourcePayload - In the implementation block
@property (assign,nonatomic) char hadPreconditionFailure;                                  //@synthesize hadPreconditionFailure=_hadPreconditionFailure - In the implementation block
@property (nonatomic,retain) NSString * updatedETag;                                       //@synthesize updatedETag=_updatedETag - In the implementation block
@property (nonatomic,retain) NSString * updatedScheduleTag;                                //@synthesize updatedScheduleTag=_updatedScheduleTag - In the implementation block
@property (nonatomic,retain) NSDictionary * postFailureSizes;                              //@synthesize postFailureSizes=_postFailureSizes - In the implementation block
@property (nonatomic,retain) NSURL * resourceURL;                                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,retain) NSDictionary * attachments;                                   //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSDictionary * contentTypes;                                  //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filenamesToServerLocation;              //@synthesize filenamesToServerLocation=_filenamesToServerLocation - In the implementation block
-(NSURL *)resourceURL;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSDictionary *)attachments;
-(void)setAttachments:(NSDictionary *)arg1 ;
-(void)startTaskGroup;
-(void)setResourceURL:(NSURL *)arg1 ;
-(id)urlWithQuery;
-(NSString *)previousScheduleTag;
-(NSString *)previousETag;
-(NSString *)updatedETag;
-(NSString *)updatedScheduleTag;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)setContentTypes:(NSDictionary *)arg1 ;
-(NSDictionary *)contentTypes;
-(void)_sendAttachments;
-(NSMutableDictionary *)filenamesToServerLocation;
-(void)setUpdatedResourcePayload:(NSData *)arg1 ;
-(void)setUpdatedScheduleTag:(NSString *)arg1 ;
-(void)setUpdatedETag:(NSString *)arg1 ;
-(void)setHadPreconditionFailure:(char)arg1 ;
-(void)setPostFailureSizes:(NSDictionary *)arg1 ;
-(char)_postedLastAttachment;
-(void)_fetchUpdatedContent;
-(char)hadPreconditionFailure;
-(void)_handlePostResponse:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 resourceURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 taskManager:(id)arg5 ;
-(NSData *)updatedResourcePayload;
-(NSDictionary *)postFailureSizes;
-(void)setFilenamesToServerLocation:(NSMutableDictionary *)arg1 ;
@end

