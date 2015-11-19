/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitRoutingIncidentMessage.h>

@class NSString, NSArray, GEOPBTransitRoutingIncidentMessage;

@interface _GEOTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage> {

	GEOPBTransitRoutingIncidentMessage* _routingIncidentMessage;
	NSArray* _transitIncidents;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * routingMessage; 
@property (nonatomic,readonly) NSArray * transitIncidents; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)routingMessage;
-(NSArray *)transitIncidents;
-(id)_fakeTransitLineIncidentInLine:(id)arg1 ;
-(id)initFakeLineIncidentMessageInLine:(id)arg1 ;
-(id)initWithIncidentMessage:(id)arg1 decoderData:(id)arg2 ;
-(id)initWithIncidentMessageIndex:(unsigned)arg1 decoderData:(id)arg2 ;
-(void)_populateTransitIncidentsWithDecoderData:(id)arg1 ;
@end

