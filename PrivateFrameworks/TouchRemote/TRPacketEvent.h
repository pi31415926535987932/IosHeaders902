/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSData;

@interface TRPacketEvent : NSObject <NSSecureCoding> {

	unsigned _packetEventType;
	NSDictionary* _payloadDictionary;
	unsigned _version;

}

@property (nonatomic,readonly) NSData * networkRepresentation; 
@property (assign,nonatomic) unsigned packetEventType;                        //@synthesize packetEventType=_packetEventType - In the implementation block
@property (nonatomic,readonly) NSDictionary * payloadDictionary;              //@synthesize payloadDictionary=_payloadDictionary - In the implementation block
@property (nonatomic,readonly) unsigned version;                              //@synthesize version=_version - In the implementation block
+(char)supportsSecureCoding;
+(Class)_packetClassForPacketEventType:(unsigned)arg1 ;
+(unsigned)_packetEventType;
+(id)packetWithNetworkRepresentation:(id)arg1 ;
+(unsigned long)networkRepresentationHeaderLength;
+(unsigned long)payloadSizeWithNetworkRepresentationHeader:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)version;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(void)setPacketEventType:(unsigned)arg1 ;
-(NSData *)networkRepresentation;
-(id)_networkRepresentationForEventType:(unsigned)arg1 version:(unsigned)arg2 payloadDictionary:(id)arg3 ;
-(unsigned)packetEventType;
-(NSDictionary *)payloadDictionary;
@end

