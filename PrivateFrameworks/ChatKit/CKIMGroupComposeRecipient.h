/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>
#import <libobjc.A.dylib/CKIMComposeRecipient.h>

@class NSString, NSArray, NSDate, CKIMComposeRecipient;

@interface CKIMGroupComposeRecipient : MFComposeRecipient <CKIMComposeRecipient> {

	NSString* _conversationGUID;
	NSArray* _composeRecipients;
	NSArray* _handles;
	NSDate* _lastMessageDate;
	CKIMComposeRecipient* _matchingRecipient;
	NSString* _detailsString;

}

@property (nonatomic,retain) NSString * conversationGUID;                           //@synthesize conversationGUID=_conversationGUID - In the implementation block
@property (nonatomic,retain) NSArray * composeRecipients;                           //@synthesize composeRecipients=_composeRecipients - In the implementation block
@property (nonatomic,retain) NSArray * handles;                                     //@synthesize handles=_handles - In the implementation block
@property (nonatomic,retain) NSDate * lastMessageDate;                              //@synthesize lastMessageDate=_lastMessageDate - In the implementation block
@property (nonatomic,retain) CKIMComposeRecipient * matchingRecipient;              //@synthesize matchingRecipient=_matchingRecipient - In the implementation block
@property (nonatomic,retain) NSString * displayString; 
@property (nonatomic,retain) NSString * detailsString;                              //@synthesize detailsString=_detailsString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)composeRecipientWithConversation:(id)arg1 searchTerm:(id)arg2 matchingRecipient:(id)arg3 ;
-(id)address;
-(void)dealloc;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSArray *)handles;
-(NSArray *)composeRecipients;
-(id)compositeName;
-(char)isRemovableFromSearchResults;
-(NSString *)conversationGUID;
-(void)releaseIMReferences;
-(NSDate *)lastMessageDate;
-(id)initWithGUID:(id)arg1 displayString:(id)arg2 detailsString:(id)arg3 handles:(id)arg4 lastMessageDate:(id)arg5 searchTerm:(id)arg6 matchingRecipient:(id)arg7 ;
-(void)setConversationGUID:(NSString *)arg1 ;
-(void)setDetailsString:(NSString *)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(void)setLastMessageDate:(NSDate *)arg1 ;
-(void)setMatchingRecipient:(CKIMComposeRecipient *)arg1 ;
-(NSString *)detailsString;
-(void)setComposeRecipients:(NSArray *)arg1 ;
-(CKIMComposeRecipient *)matchingRecipient;
@end

