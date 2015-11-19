/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DADataElement <NSObject>
@required
-(char)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 account:(id)arg5;
-(void)setLocalItem:(void*)arg1;
-(char)loadLocalItemWithAccount:(id)arg1;
-(char)saveServerIDToExistingItem;
-(char)deleteFromContainer:(void*)arg1;

@end

