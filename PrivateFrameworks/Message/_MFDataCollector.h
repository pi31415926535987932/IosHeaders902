/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@class MFMailMessageLibrary, MFLibraryMessage, MFBufferedDataConsumer, NSString;

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {

	MFMailMessageLibrary* _library;
	MFLibraryMessage* _message;
	MFBufferedDataConsumer* _consumer;
	NSString* _part;
	char _partial;
	char _incomplete;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)data;
-(void)done;
-(int)appendData:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(char)arg4 incomplete:(char)arg5 ;
-(id)pathForStorage;
@end

