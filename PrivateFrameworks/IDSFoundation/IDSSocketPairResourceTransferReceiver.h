/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IDSSocketPairResourceTransferReceiver : NSObject {

	NSString* _resourcePath;
	NSDictionary* _metadata;
	int _fileDescriptor;
	unsigned long long _totalBytesExpected;
	unsigned long long _totalBytesReceived;
	char _done;
	char _isResuming;
	char _resumeResourceTransfers;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	char _expectsPeerResponse;
	char _wantsAppAck;
	char _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;

}

@property (nonatomic,readonly) unsigned long long totalBytesReceived;              //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
+(id)incomingFilePathForMessageUUID:(id)arg1 ;
+(id)incomingFilePath;
-(void)dealloc;
-(unsigned long long)totalBytesReceived;
-(char)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2 ;
-(char)writeResourceData:(id)arg1 ;
-(id)initWithMessage:(id)arg1 resumeResourceTransfers:(char)arg2 receiverError:(unsigned char*)arg3 ;
-(void)abortTransfer;
-(char)appendMessage:(id)arg1 receiverError:(unsigned char*)arg2 ;
-(id)finalizedMessageDictionaryIfDone;
@end

