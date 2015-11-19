/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASChangedCollectionLeaf.h>

@class NSArray, NSDate, NSString, NSData, ASMeetingRequest;

@interface ASEmailItem : ASChangedCollectionLeaf {

	char _shouldIncludeExceptionDateInUid;
	char _read;
	char _flagged;
	char _bodyTruncated;
	char _readIsSet;
	char _flaggedIsSet;
	char _verbIsSet;
	char _isDraft;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _from;
	NSArray* _replyTo;
	NSDate* _date;
	NSString* _subject;
	NSString* _displayTo;
	int _importance;
	NSString* _body;
	int _bodySize;
	NSString* _messageClass;
	NSArray* _attachments;
	NSString* _threadTopic;
	NSData* _conversationId;
	NSData* _conversationIndex;
	NSString* _mimeData;
	NSString* _folderId;
	NSString* _longID;
	int _lastVerb;
	NSString* _sender;
	int _bodyType;
	NSArray* _bcc;
	ASMeetingRequest* _meetingRequest;

}

@property (nonatomic,copy) NSArray * to;                                                                //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                                                                //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * from;                                                              //@synthesize from=_from - In the implementation block
@property (nonatomic,copy) NSArray * replyTo;                                                           //@synthesize replyTo=_replyTo - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                             //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * subject;                                                        //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * displayTo;                                                      //@synthesize displayTo=_displayTo - In the implementation block
@property (assign,nonatomic) int importance;                                                            //@synthesize importance=_importance - In the implementation block
@property (assign,nonatomic) char read;                                                                 //@synthesize read=_read - In the implementation block
@property (assign,nonatomic) char flagged;                                                              //@synthesize flagged=_flagged - In the implementation block
@property (nonatomic,retain) NSString * body;                                                           //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) int bodySize;                                                              //@synthesize bodySize=_bodySize - In the implementation block
@property (assign,nonatomic) char bodyTruncated;                                                        //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (nonatomic,retain) NSString * messageClass;                                                   //@synthesize messageClass=_messageClass - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                                     //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSString * threadTopic;                                                    //@synthesize threadTopic=_threadTopic - In the implementation block
@property (nonatomic,retain) NSData * conversationId;                                                   //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,retain) NSData * conversationIndex;                                                //@synthesize conversationIndex=_conversationIndex - In the implementation block
@property (nonatomic,retain) NSString * mimeData;                                                       //@synthesize mimeData=_mimeData - In the implementation block
@property (nonatomic,retain) NSString * folderId;                                                       //@synthesize folderId=_folderId - In the implementation block
@property (nonatomic,retain) NSString * longID;                                                         //@synthesize longID=_longID - In the implementation block
@property (assign,nonatomic) int lastVerb;                                                              //@synthesize lastVerb=_lastVerb - In the implementation block
@property (nonatomic,retain) NSString * sender;                                                         //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic) char readIsSet;                                                            //@synthesize readIsSet=_readIsSet - In the implementation block
@property (assign,nonatomic) char flaggedIsSet;                                                         //@synthesize flaggedIsSet=_flaggedIsSet - In the implementation block
@property (assign,nonatomic) char verbIsSet;                                                            //@synthesize verbIsSet=_verbIsSet - In the implementation block
@property (nonatomic,readonly) NSString * meetingRequestUUID; 
@property (nonatomic,readonly) NSData * meetingRequestMetaData; 
@property (nonatomic,readonly) int meetingMessageType; 
@property (assign,nonatomic) int bodyType;                                                              //@synthesize bodyType=_bodyType - In the implementation block
@property (nonatomic,copy) NSArray * bcc;                                                               //@synthesize bcc=_bcc - In the implementation block
@property (assign,nonatomic) char isDraft;                                                              //@synthesize isDraft=_isDraft - In the implementation block
@property (setter=_setMeetingRequest:,nonatomic,retain) ASMeetingRequest * meetingRequest;              //@synthesize meetingRequest=_meetingRequest - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSArray *)cc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)compare:(id)arg1 ;
-(NSDate *)date;
-(NSString *)sender;
-(NSString *)body;
-(void)setDate:(NSDate *)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(void)setSender:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setBody:(NSString *)arg1 ;
-(void)setMessageClass:(NSString *)arg1 ;
-(NSString *)messageClass;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setImportance:(int)arg1 ;
-(int)importance;
-(void)postProcessApplicationData;
-(char)bodyTruncated;
-(void)setBodyTruncated:(char)arg1 ;
-(int)bodyType;
-(void)setLongID:(NSString *)arg1 ;
-(void)_setMeetingRequest:(id)arg1 ;
-(char)_isSearchResult;
-(void)processAppDataForStream;
-(NSArray *)replyTo;
-(void)setBodySize:(int)arg1 ;
-(void)setToString:(id)arg1 ;
-(void)setCCString:(id)arg1 ;
-(void)setBCCString:(id)arg1 ;
-(void)setFromString:(id)arg1 ;
-(void)setReplyToString:(id)arg1 ;
-(void)setDisplayTo:(NSString *)arg1 ;
-(void)setLastVerb:(int)arg1 ;
-(void)setIsDraft:(char)arg1 ;
-(void)setMimeData:(NSString *)arg1 ;
-(void)setThreadTopic:(NSString *)arg1 ;
-(void)setConversationId:(NSData *)arg1 ;
-(void)setConversationIndex:(NSData *)arg1 ;
-(void)_processApplicationData:(char)arg1 ;
-(void)setFolderId:(NSString *)arg1 ;
-(ASMeetingRequest *)meetingRequest;
-(NSString *)displayTo;
-(NSString *)threadTopic;
-(NSString *)mimeData;
-(NSData *)conversationIndex;
-(int)meetingMessageType;
-(void)setReplyTo:(NSArray *)arg1 ;
-(void)setReadIsSet:(char)arg1 ;
-(void)setFlaggedIsSet:(char)arg1 ;
-(void)setVerbIsSet:(char)arg1 ;
-(char)isDraft;
-(void)setCc:(NSArray *)arg1 ;
-(NSArray *)bcc;
-(void)setBcc:(NSArray *)arg1 ;
-(void)setBodyType:(int)arg1 ;
-(int)bodySize;
-(NSString *)meetingRequestUUID;
-(NSString *)longID;
-(char)readIsSet;
-(char)flaggedIsSet;
-(char)flagged;
-(char)verbIsSet;
-(int)lastVerb;
-(NSData *)meetingRequestMetaData;
-(NSData *)conversationId;
-(void)setRead:(char)arg1 ;
-(void)setFlagged:(char)arg1 ;
-(NSString *)folderId;
-(NSArray *)from;
-(NSArray *)to;
-(char)read;
-(void)setFrom:(NSArray *)arg1 ;
-(void)setTo:(NSArray *)arg1 ;
@end

