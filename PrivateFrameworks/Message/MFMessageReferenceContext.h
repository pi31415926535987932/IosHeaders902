/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, MFMailMessage, MFSparseMutable64IndexSet, NSMutableDictionary, MFEmailSet;

@interface MFMessageReferenceContext : NSObject {

	NSString* _sender;
	NSArray* _senderList;
	NSString* _to;
	NSArray* _toList;
	NSString* _cc;
	NSArray* _ccList;
	NSString* _bcc;
	NSArray* _bccList;
	MFMailMessage* _message;
	unsigned _libraryID;
	NSString* _subject;
	MFSparseMutable64IndexSet* _references;
	NSMutableDictionary* _messageIDsBySubject;
	int _mailboxID;
	unsigned long long* _conversationFlagsRef;
	long long _messageIDHash;
	long long _conversationIDHash;
	double _dateSentInterval;

}

@property (nonatomic,retain) MFMailMessage * message;                                //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned libraryID;                                     //@synthesize libraryID=_libraryID - In the implementation block
@property (assign,nonatomic) long long messageIDHash;                                //@synthesize messageIDHash=_messageIDHash - In the implementation block
@property (nonatomic,copy) NSString * subject;                                       //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) unsigned subjectPrefixLength; 
@property (nonatomic,readonly) NSString * subjectWithoutPrefix; 
@property (nonatomic,retain) MFSparseMutable64IndexSet * references;                 //@synthesize references=_references - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageIDsBySubject;              //@synthesize messageIDsBySubject=_messageIDsBySubject - In the implementation block
@property (assign,nonatomic) int mailboxID;                                          //@synthesize mailboxID=_mailboxID - In the implementation block
@property (assign,nonatomic) long long conversationIDHash;                           //@synthesize conversationIDHash=_conversationIDHash - In the implementation block
@property (assign,nonatomic) unsigned long long* conversationFlagsRef;               //@synthesize conversationFlagsRef=_conversationFlagsRef - In the implementation block
@property (assign,nonatomic) double dateSentInterval;                                //@synthesize dateSentInterval=_dateSentInterval - In the implementation block
@property (nonatomic,copy) NSArray * senderList;                                     //@synthesize senderList=_senderList - In the implementation block
@property (nonatomic,copy) NSArray * toList;                                         //@synthesize toList=_toList - In the implementation block
@property (nonatomic,copy) NSArray * ccList;                                         //@synthesize ccList=_ccList - In the implementation block
@property (nonatomic,copy) NSArray * bccList;                                        //@synthesize bccList=_bccList - In the implementation block
@property (nonatomic,copy) NSString * sender;                                        //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * to;                                            //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSString * cc;                                            //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSString * bcc;                                           //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,readonly) MFEmailSet * participants; 
-(unsigned)libraryID;
-(NSString *)cc;
-(void)dealloc;
-(MFMailMessage *)message;
-(NSString *)sender;
-(void)setMessage:(MFMailMessage *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(void)setSender:(NSString *)arg1 ;
-(NSString *)subject;
-(MFEmailSet *)participants;
-(int)mailboxID;
-(unsigned)subjectPrefixLength;
-(NSArray *)senderList;
-(NSArray *)toList;
-(NSArray *)ccList;
-(NSArray *)bccList;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setToList:(NSArray *)arg1 ;
-(void)setCc:(NSString *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
-(NSString *)bcc;
-(void)setBcc:(NSString *)arg1 ;
-(void)setBccList:(NSArray *)arg1 ;
-(NSString *)subjectWithoutPrefix;
-(void)setLibraryID:(unsigned)arg1 ;
-(long long)messageIDHash;
-(void)setMessageIDHash:(long long)arg1 ;
-(NSMutableDictionary *)messageIDsBySubject;
-(void)setMessageIDsBySubject:(NSMutableDictionary *)arg1 ;
-(void)setMailboxID:(int)arg1 ;
-(long long)conversationIDHash;
-(void)setConversationIDHash:(long long)arg1 ;
-(unsigned long long*)conversationFlagsRef;
-(void)setConversationFlagsRef:(unsigned long long*)arg1 ;
-(double)dateSentInterval;
-(void)setDateSentInterval:(double)arg1 ;
-(MFSparseMutable64IndexSet *)references;
-(NSString *)to;
-(void)setTo:(NSString *)arg1 ;
-(void)setReferences:(MFSparseMutable64IndexSet *)arg1 ;
@end

