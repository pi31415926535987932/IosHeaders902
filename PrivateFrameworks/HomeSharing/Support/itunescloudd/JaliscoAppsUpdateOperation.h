/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/JaliscoUpdateOperation.h>

@class JaliscoAppLibrary, SSAppPurchaseHistoryDatabase, NSNumber;

@interface JaliscoAppsUpdateOperation : JaliscoUpdateOperation {

	JaliscoAppLibrary* _appCloudLibrary;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;
	NSNumber* _familyMemberStoreID;

}

@property (nonatomic,retain) NSNumber * familyMemberStoreID;                                      //@synthesize familyMemberStoreID=_familyMemberStoreID - In the implementation block
@property (nonatomic,retain) JaliscoAppLibrary * appCloudLibrary;                                 //@synthesize appCloudLibrary=_appCloudLibrary - In the implementation block
@property (nonatomic,retain) SSAppPurchaseHistoryDatabase * purchaseHistoryDatabase;              //@synthesize purchaseHistoryDatabase=_purchaseHistoryDatabase - In the implementation block
-(int)localDatabaseRevision;
-(void)setAppCloudLibrary:(JaliscoAppLibrary *)arg1 ;
-(id)queryFilterPercentEscaped;
-(id)newImporter;
-(char)preflightImport;
-(void)beginPerformUpdate;
-(void)endPerformUpdate;
-(void)handleSuccess:(int)arg1 ;
-(JaliscoAppLibrary *)appCloudLibrary;
-(SSAppPurchaseHistoryDatabase *)purchaseHistoryDatabase;
-(void)setPurchaseHistoryDatabase:(SSAppPurchaseHistoryDatabase *)arg1 ;
-(char)includeHiddenItems;
-(NSNumber *)familyMemberStoreID;
-(void)setFamilyMemberStoreID:(NSNumber *)arg1 ;
-(id)initWithReason:(long long)arg1 ;
@end
