/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Network/Network-Structs.h>
@class NWNetworkDescription, NSArray, NWEndpoint, NWParameters, NSString;

@interface NWMonitor : NSObject {

	int _status;
	NWNetworkDescription* _bestAvailableNetworkDescription;
	NSArray* _networkDescriptionArray;
	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	net_helper_endpoint_sRef _helperEndpoint;
	unsigned long long _monitorResult;

}

@property (readonly) int status;                                                          //@synthesize status=_status - In the implementation block
@property (readonly) NWNetworkDescription * bestAvailableNetworkDescription;              //@synthesize bestAvailableNetworkDescription=_bestAvailableNetworkDescription - In the implementation block
@property (readonly) NSArray * networkDescriptionArray;                                   //@synthesize networkDescriptionArray=_networkDescriptionArray - In the implementation block
@property (readonly) NWEndpoint * endpoint;                                               //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NWParameters * parameters;                                           //@synthesize parameters=_parameters - In the implementation block
@property (copy,readonly) NSString * privateDescription; 
@property (assign) net_helper_endpoint_sRef helperEndpoint;                               //@synthesize helperEndpoint=_helperEndpoint - In the implementation block
@property (assign) unsigned long long monitorResult;                                      //@synthesize monitorResult=_monitorResult - In the implementation block
+(id)queue;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)getSavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
+(void)saveMonitor:(id)arg1 ;
-(NSString *)privateDescription;
-(void)handleMessage:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NWParameters *)parameters;
-(NWEndpoint *)endpoint;
-(int)status;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(char)arg2 ;
-(id)initWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(net_helper_endpoint_sRef)helperEndpoint;
-(void)setMonitorResult:(unsigned long long)arg1 ;
-(char)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(NWNetworkDescription *)bestAvailableNetworkDescription;
-(unsigned long long)monitorResult;
-(void)startHelperConnection;
-(id)initWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(NSArray *)networkDescriptionArray;
-(void)setHelperEndpoint:(net_helper_endpoint_sRef)arg1 ;
@end

