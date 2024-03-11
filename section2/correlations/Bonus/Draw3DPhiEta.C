void Draw3DPhiEta(){
  // Example macro to draw efficiencies
  gStyle->SetOptStat(1);
  gStyle->SetPalette(57);
  
  TFile *file = new TFile("AnalysisResults.root", "READ");
  TH2F *hmultC = (TH2F*) file  -> Get ("derived-basic-consumer/correlationFunction2d");
  
  TCanvas *cn = new TCanvas("cn", "", 1000,600);
  cn->SetTicks(1,1);


  //https://root.cern/doc/master/classTHistPainter.html
  //hmultC->Draw("LEGO2Z");
  hmultC->Draw("SURF1");


  hmultC->SetTitle("CorrelationFunction3D");
  hmultC->GetYaxis()->SetTitle("#Delta#eta");
  hmultC->GetXaxis()->SetTitle("#Delta#phi");
  




  

  cn->SaveAs("CorrelationFunction3D.png");
}