/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOResourceManifestServerProxyDelegate <NSObject>
@required
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3;

@end
