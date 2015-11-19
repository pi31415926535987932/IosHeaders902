/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CRCarKitService
@required
-(void)isPairedWithCertificateSerial:(id)arg1 reply:(/*^block*/id)arg2;
-(void)saveVehicle:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeVehicle:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchAllVehiclesWithReply:(/*^block*/id)arg1;
-(void)handleDidConnectBluetoothAddress:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleDidDisconnectBluetoothAddress:(id)arg1 reply:(/*^block*/id)arg2;
-(void)isBluetoothInCarWithReply:(/*^block*/id)arg1;
-(void)saveWiFiCredentialsForAccessoryConnectionIdentifier:(unsigned)arg1 credentials:(id)arg2 reply:(/*^block*/id)arg3;
-(void)allowsConnectionsForWiFiUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleCarPlayRestrictionChangedWithReply:(/*^block*/id)arg1;

@end

