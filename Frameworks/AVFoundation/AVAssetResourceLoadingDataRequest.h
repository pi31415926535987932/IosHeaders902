/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {

	AVAssetResourceLoadingDataRequestInternal* _dataRequest;

}

@property (nonatomic,readonly) long long requestedOffset; 
@property (nonatomic,readonly) int requestedLength; 
@property (nonatomic,readonly) char requestsAllDataToEndOfResource; 
@property (nonatomic,readonly) long long currentOffset; 
-(long long)requestedOffset;
-(int)requestedLength;
-(long long)currentOffset;
-(char)requestsAllDataToEndOfResource;
-(id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(char)arg4 canSupplyIncrementalDataImmediately:(char)arg5 ;
-(id)_loadingRequest;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)finalize;
-(void)respondWithData:(id)arg1 ;
@end

